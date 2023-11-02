
@interface MPCAssetLoader : NSObject <MFAssetLoading> {
    MPCPlayerItemConfigurator * _configurator;
    <MPCAssetLoaderDelegate> * _delegate;
    NSOperationQueue * _loadingQueue;
}

@property (nonatomic, retain) MPCPlayerItemConfigurator *configurator;
@property (nonatomic) <MPCAssetLoaderDelegate> *delegate;
@property (nonatomic, readonly) NSOperationQueue *loadingQueue;

- (void).cxx_destruct;
- (void)cancelLoading;
- (id)configurator;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)loadAssetFor:(id)arg1 token:(long long)arg2 completion:(id /* block */)arg3;
- (void)loadAssetValuesFor:(id)arg1 keys:(id)arg2 completion:(id /* block */)arg3;
- (id)loadingQueue;
- (void)setConfigurator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)unloadingPlaybackAssetsOnIdleDuration;

@end
