
@protocol BCSShardItemProtocol <BCSFilterShardItemIdentifying, BCSExpiring>

@required

- (NSString *)base64EncodedString;

@end
