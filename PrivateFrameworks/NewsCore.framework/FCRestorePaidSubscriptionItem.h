
@interface FCRestorePaidSubscriptionItem : NSObject {
    NSString * _channelID;
    bool  _isNewsAppPurchase;
}

@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) bool isNewsAppPurchase;

- (void).cxx_destruct;
- (id)channelID;
- (id)initWithChannelID:(id)arg1 isNewsAppPurchase:(bool)arg2;
- (bool)isNewsAppPurchase;

@end
