
@interface SVAVPlayerItemFactory : NSObject <SVAVPlayerItemFactory> {
    <SVAVURLAssetFactory> * _assetFactory;
    NSArray * _automaticallyLoadedAssetKeys;
    double  _preferredForwardBufferDuration;
}

@property (nonatomic, readonly) <SVAVURLAssetFactory> *assetFactory;
@property (nonatomic, readonly, copy) NSArray *automaticallyLoadedAssetKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredForwardBufferDuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetFactory;
- (id)automaticallyLoadedAssetKeys;
- (id)createPlayerItemWithURL:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1 assetFactory:(id)arg2 preferredForwardBufferDuration:(double)arg3;
- (double)preferredForwardBufferDuration;

@end
