
@protocol FCPurchaseAccessCheckable <NFCopying>

@required

- (NSString *)identifier;
- (bool)isBundlePaid;
- (bool)isPaid;
- (<FCChannelProviding> *)sourceChannel;

@end
