
@protocol FCStorefrontAccessCheckable <NFCopying>

@required

- (NSArray *)allowedStorefrontIDs;
- (NSArray *)blockedStorefrontIDs;
- (NSString *)identifier;
- (NSString *)sourceChannelID;

@end
