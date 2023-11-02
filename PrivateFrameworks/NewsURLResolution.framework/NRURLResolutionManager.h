
@interface NRURLResolutionManager : NSObject {
    <NRBloomFilterInfoService> * _bloomFilterInfoService;
}

@property (nonatomic, readonly) <NRBloomFilterInfoService> *bloomFilterInfoService;
@property (nonatomic, readonly) bool userHasBundleSubscription;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)bloomFilterInfoService;
- (id)createResolutionOperationForNewsURL:(id)arg1;
- (id)createResolutionOperationForWebURL:(id)arg1;
- (id)init;
- (bool)userHasBundleSubscription;

@end
