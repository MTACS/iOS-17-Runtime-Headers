
@interface LDCMMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> * _assetManagerQueue;
    <LDCMMobileAssetManagerDelegate> * _delegate;
    int  _lastProcessedAssetVersion;
    unsigned int  _queryFrequencySec;
    unsigned int  _queryFrequencyToleranceSec;
    unsigned int  _retryQueryFrequencySec;
    unsigned int  _retryQueryFrequencyToleranceSec;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetManagerQueue;
@property (nonatomic) <LDCMMobileAssetManagerDelegate> *delegate;
@property (nonatomic) int lastProcessedAssetVersion;
@property (nonatomic) unsigned int queryFrequencySec;
@property (nonatomic) unsigned int queryFrequencyToleranceSec;
@property (nonatomic) unsigned int retryQueryFrequencySec;
@property (nonatomic) unsigned int retryQueryFrequencyToleranceSec;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (id)assetManagerQueue;
- (id)delegate;
- (void)downloadAsset:(id)arg1;
- (void)downloadCatalog;
- (id)init;
- (int)lastProcessedAssetVersion;
- (void)processAsset:(id)arg1;
- (unsigned int)queryFrequencySec;
- (unsigned int)queryFrequencyToleranceSec;
- (void)queryMetadata;
- (unsigned int)retryQueryFrequencySec;
- (unsigned int)retryQueryFrequencyToleranceSec;
- (void)scheduleNextQueryAsRetry:(bool)arg1;
- (void)setAssetManagerQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastProcessedAssetVersion:(int)arg1;
- (void)setQueryFrequencySec:(unsigned int)arg1;
- (void)setQueryFrequencyToleranceSec:(unsigned int)arg1;
- (void)setRetryQueryFrequencySec:(unsigned int)arg1;
- (void)setRetryQueryFrequencyToleranceSec:(unsigned int)arg1;
- (void)setTimer:(id)arg1;
- (bool)supportsCompatabilityVersion:(int)arg1;
- (id)timer;
- (void)updateMetadata;

@end
