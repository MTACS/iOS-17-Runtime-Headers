
@interface PTEffectResources : NSObject {
    PTEspressoGenericExecutor * _effectNetwork;
    NSString * _effectNetworkConfig;
    NSString * _effectNetworkPath;
    PTHandGestureDetector * _handGestureDetector;
    ANSTForegroundSegmentation * _personSegmentationProvider;
    unsigned long long  _personSegmentationProviderAspectRatio;
    PTVFXRenderEffect * _renderEffect;
    PTEspressoGenericExecutor * _segmentationNetwork;
}

@property (nonatomic, retain) PTEspressoGenericExecutor *effectNetwork;
@property (nonatomic, retain) NSString *effectNetworkConfig;
@property (nonatomic, retain) NSString *effectNetworkPath;
@property (nonatomic, retain) PTHandGestureDetector *handGestureDetector;
@property (nonatomic, retain) ANSTForegroundSegmentation *personSegmentationProvider;
@property (nonatomic) unsigned long long personSegmentationProviderAspectRatio;
@property (nonatomic, retain) PTVFXRenderEffect *renderEffect;
@property (nonatomic, retain) PTEspressoGenericExecutor *segmentationNetwork;

- (void).cxx_destruct;
- (id)effectNetwork;
- (id)effectNetworkConfig;
- (id)effectNetworkPath;
- (id)handGestureDetector;
- (id)personSegmentationProvider;
- (unsigned long long)personSegmentationProviderAspectRatio;
- (id)renderEffect;
- (id)segmentationNetwork;
- (void)setEffectNetwork:(id)arg1;
- (void)setEffectNetworkConfig:(id)arg1;
- (void)setEffectNetworkPath:(id)arg1;
- (void)setHandGestureDetector:(id)arg1;
- (void)setPersonSegmentationProvider:(id)arg1;
- (void)setPersonSegmentationProviderAspectRatio:(unsigned long long)arg1;
- (void)setRenderEffect:(id)arg1;
- (void)setSegmentationNetwork:(id)arg1;

@end
