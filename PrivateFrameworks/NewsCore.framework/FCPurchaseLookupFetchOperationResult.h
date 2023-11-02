
@interface FCPurchaseLookupFetchOperationResult : NSObject {
    NSDictionary * _bundleChannelIDsByPurchaseID;
    NSString * _bundleChannelIDsVersion;
    NSDictionary * _channelIDsByPurchaseID;
    NSError * _error;
}

@property (nonatomic, copy) NSDictionary *bundleChannelIDsByPurchaseID;
@property (nonatomic, copy) NSString *bundleChannelIDsVersion;
@property (nonatomic, copy) NSDictionary *channelIDsByPurchaseID;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)bundleChannelIDsByPurchaseID;
- (id)bundleChannelIDsVersion;
- (id)channelIDsByPurchaseID;
- (id)error;
- (id)initWithChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsByPurchaseID:(id)arg2 bundleChannelIDsVersion:(id)arg3 error:(id)arg4;
- (void)setBundleChannelIDsByPurchaseID:(id)arg1;
- (void)setBundleChannelIDsVersion:(id)arg1;
- (void)setChannelIDsByPurchaseID:(id)arg1;
- (void)setError:(id)arg1;

@end
