

#import <Foundation/Foundation.h>

@class UAChannelRegistrationPayload;

#define kUAPushMultipleTagsJSONKey @"tags"
#define kUAPushSingleTagJSONKey @"tag"
#define kUAPushAliasJSONKey @"alias"
#define kUAPushQuietTimeJSONKey @"quiettime"
#define kUAPushTimeZoneJSONKey @"tz"
#define kUAPushBadgeJSONKey @"badge"

/**
 * The device registration payload.
 */
@interface UADeviceRegistrationPayload : NSObject

+ (instancetype)payloadWithAlias:(NSString *)alias
              withTags:(NSArray *)tags
          withTimeZone:(NSString *)timeZone
         withQuietTime:(NSDictionary *)quietTime
             withBadge:(NSNumber *)badge;

/**
 * Factory method to create a device registration payload from a 
 * channel registration payload.
 *
 * @param payload An instance of a UAChannelRegistrationPayload
 * @return A UADeviceRegistrationPayload created from the
 * UAChannelRegistrationPayload.
 */
+ (instancetype)payloadFromChannelRegistrationPayload:(UAChannelRegistrationPayload *)payload;

/**
 * Gets the payload as an NSDictionary
 *
 * @return The payload represented as an NSDictionary.
 */
- (NSDictionary *)asDictionary;

/**
 * Gets the payload as a JSON NSString
 *
 * @return The payload represented as a JSON NSString.
 */
- (NSString *)asJSONString;

/**
 * Gets the payload as a JSON NSData.
 *
 * @return The payload as JSON NSData.
 */
- (NSData *)asJSONData;

@end
