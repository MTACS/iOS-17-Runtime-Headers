
@interface PFParallaxLayerStack : NSObject {
    double  _clockAreaLuminance;
    bool  _depthEnabled;
    NSDictionary * _layerMap;
    NSArray * _layers;
    PFPosterOrientedLayout * _layout;
    bool  _mayContainBakedHeadroom;
    bool  _parallaxDisabled;
    bool  _settlingEffectEnabled;
}

@property (nonatomic, readonly) PFParallaxImageLayer *backgroundBackfillLayer;
@property (nonatomic, readonly) PFParallaxImageLayer *backgroundLayer;
@property (nonatomic, readonly) double clockAreaLuminance;
@property (nonatomic, readonly) bool depthEnabled;
@property (nonatomic, readonly) PFParallaxImageLayer *foregroundBackfillLayer;
@property (nonatomic, readonly) PFParallaxImageLayer *foregroundLayer;
@property (nonatomic, readonly) bool hasBackfillLayers;
@property (nonatomic, readonly) bool hasDebugLayers;
@property (nonatomic, readonly) bool hasInactiveLayers;
@property (nonatomic, readonly) bool hasMainLayers;
@property (nonatomic, readonly) PFParallaxImageLayer *inactiveBackgroundLayer;
@property (nonatomic, readonly) PFParallaxImageLayer *inactiveForegroundLayer;
@property (nonatomic, retain) NSDictionary *layerMap;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic, readonly) PFPosterOrientedLayout *layout;
@property (nonatomic, readonly) bool mayContainBakedHeadroom;
@property (nonatomic, readonly) bool parallaxDisabled;
@property (nonatomic, readonly) bool settlingEffectEnabled;
@property (nonatomic, readonly) PFParallaxVideoLayer *settlingEffectLayer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)_resizeLayers:(id)arg1 oldImageSize:(struct CGSize { double x1; double x2; })arg2 newImageSize:(struct CGSize { double x1; double x2; })arg3;
- (id)backgroundBackfillLayer;
- (id)backgroundLayer;
- (double)clockAreaLuminance;
- (bool)depthEnabled;
- (id)description;
- (id)foregroundBackfillLayer;
- (id)foregroundLayer;
- (bool)hasBackfillLayers;
- (bool)hasDebugLayers;
- (bool)hasInactiveLayers;
- (bool)hasMainLayers;
- (id)inactiveBackgroundLayer;
- (id)inactiveForegroundLayer;
- (id)initWithLayers:(id)arg1 layout:(id)arg2 depthEnabled:(bool)arg3 parallaxDisabled:(bool)arg4 clockAreaLuminance:(double)arg5 settlingEffectEnabled:(bool)arg6;
- (id)layerMap;
- (id)layerStackByRemovingLayersWithIdentifiers:(id)arg1;
- (id)layerStackByRemovingLayersWithOptions:(unsigned long long)arg1;
- (id)layerStackByUpdatingClockAreaLuminance:(double)arg1;
- (id)layerStackByUpdatingClockLayerOrder:(id)arg1;
- (id)layerStackByUpdatingDepthEnabled:(bool)arg1;
- (id)layerStackByUpdatingInactiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layerStackByUpdatingLayers:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)layerStackByUpdatingLayout:(id)arg1;
- (id)layerStackByUpdatingParallaxDisabled:(bool)arg1;
- (id)layerStackByUpdatingSettlingEffectEnabled:(bool)arg1;
- (id)layerStackByUpdatingVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layerWithIdentifier:(id)arg1;
- (id)layers;
- (id)layout;
- (void)markMayContainBakedHeadroom;
- (bool)mayContainBakedHeadroom;
- (bool)parallaxDisabled;
- (void)setLayerMap:(id)arg1;
- (bool)settlingEffectEnabled;
- (id)settlingEffectLayer;
- (struct CGSize { double x1; double x2; })size;

@end
