
@protocol BCSLinkItemDescribing <NSObject>

@required

- (long long)action;
- (NSString *)bundleID;
- (NSString *)fullHash;
- (NSString *)heroImageURLString;
- (NSString *)iconImageURLString;
- (bool)isPoweredBy;
- (NSURL *)linkURL;
- (NSDictionary *)mapIconStyleAttributes;
- (NSNumber *)mapItemMUID;
- (NSURL *)redirectURL;

@end
