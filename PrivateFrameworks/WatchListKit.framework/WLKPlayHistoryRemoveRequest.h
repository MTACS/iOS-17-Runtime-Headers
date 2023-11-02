
@interface WLKPlayHistoryRemoveRequest : WLKRequest {
    NSString * _bundleID;
    NSString * _channelID;
    NSString * _externalID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *externalID;

- (void).cxx_destruct;
- (id)bundleID;
- (id)externalID;
- (id)initWithBundleID:(id)arg1 externalID:(id)arg2;
- (void)makeRequestWithCompletion:(id /* block */)arg1;

@end
