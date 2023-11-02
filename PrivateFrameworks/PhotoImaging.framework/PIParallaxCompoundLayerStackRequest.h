
@interface PIParallaxCompoundLayerStackRequest : NURenderRequest {
    NSError * _error;
    unsigned long long  _layerStackOptions;
    PFPosterLayout * _layout;
    NSMutableArray * _requests;
    NSMutableArray * _results;
    <PISegmentationItem> * _segmentationItem;
    bool  _settlingEffectEnabled;
    PIParallaxStyle * _style;
    bool  _updateClockAreaLuminance;
    bool  _updateClockZPosition;
    bool  _updateInactiveFrame;
}

@property (nonatomic) unsigned long long layerStackOptions;
@property (nonatomic, retain) PFPosterLayout *layout;
@property (nonatomic, readonly) <PISegmentationItem> *segmentationItem;
@property (getter=isSettlingEffectEnabled, nonatomic) bool settlingEffectEnabled;
@property (nonatomic, retain) PIParallaxStyle *style;
@property (nonatomic) bool updateClockAreaLuminance;
@property (nonatomic) bool updateClockZPosition;
@property (nonatomic) bool updateInactiveFrame;

- (void).cxx_destruct;
- (void)_chooseLayoutForOrientation:(long long)arg1 completion:(id /* block */)arg2;
- (void)_generateLayerStackForOrientation:(long long)arg1 completion:(id /* block */)arg2;
- (void)_recordError:(id)arg1;
- (void)_recordResult:(id)arg1;
- (id)_responseWithCompoundLayerStack:(id)arg1;
- (void)_submit:(id /* block */)arg1;
- (void)_submitClockMaterialRequestWithLayerStack:(id)arg1 completion:(id /* block */)arg2;
- (void)_submitClockOverlapRequestWithLayout:(id)arg1 completion:(id /* block */)arg2;
- (void)_submitInactiveLayoutRequestWithOrientedLayout:(id)arg1 completion:(id /* block */)arg2;
- (void)_submitLayerStackRequestForMode:(long long)arg1 layout:(id)arg2 completion:(id /* block */)arg3;
- (void)_submitLayerStackRequestsWithLayout:(id)arg1 orientation:(long long)arg2 completion:(id /* block */)arg3;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectiveLayout;
- (id)initWithComposition:(id)arg1;
- (id)initWithSegmentationItem:(id)arg1;
- (bool)isSettlingEffectEnabled;
- (unsigned long long)layerStackOptions;
- (id)layout;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)segmentationItem;
- (void)setLayerStackOptions:(unsigned long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setSettlingEffectEnabled:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setUpdateClockAreaLuminance:(bool)arg1;
- (void)setUpdateClockZPosition:(bool)arg1;
- (void)setUpdateInactiveFrame:(bool)arg1;
- (id)style;
- (void)submit:(id /* block */)arg1;
- (bool)updateClockAreaLuminance;
- (bool)updateClockZPosition;
- (bool)updateInactiveFrame;

@end
