
@interface CABackdropLayer : CALayer {
    bool  _disablesOccludedBackdropBlurs;
}

@property bool allowsInPlaceFiltering;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } backdropRect;
@property bool captureOnly;
@property <CABackdropLayerDelegate><CALayerDelegate> *delegate;
@property bool disablesOccludedBackdropBlurs;
@property (getter=isEnabled) bool enabled;
@property (copy) NSString *groupName;
@property (copy) NSString *groupNamespace;
@property bool ignoresScreenClip;
@property double marginWidth;
@property (nonatomic, readonly) double mt_colorMatrixDrivenInoperativeOpacity;
@property (nonatomic, readonly) double mt_colorMatrixDrivenOpacity;
@property bool reducesCaptureBitDepth;
@property double scale;
@property bool tracksLuma;
@property bool usesGlobalGroupNamespace;
@property double zoom;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (void*)_copyRenderLayer:(void*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (bool)allowsInPlaceFiltering;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backdropRect;
- (bool)captureOnly;
- (void)didChangeValueForKey:(id)arg1;
- (bool)disablesOccludedBackdropBlurs;
- (id)groupName;
- (id)groupNamespace;
- (bool)ignoresScreenClip;
- (bool)isEnabled;
- (void)layerDidBecomeVisible:(bool)arg1;
- (double)marginWidth;
- (bool)reducesCaptureBitDepth;
- (double)scale;
- (void)setAllowsInPlaceFiltering:(bool)arg1;
- (void)setBackdropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCaptureOnly:(bool)arg1;
- (void)setDisablesOccludedBackdropBlurs:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupNamespace:(id)arg1;
- (void)setIgnoresScreenClip:(bool)arg1;
- (void)setMarginWidth:(double)arg1;
- (void)setReducesCaptureBitDepth:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setTracksLuma:(bool)arg1;
- (void)setUsesGlobalGroupNamespace:(bool)arg1;
- (void)setZoom:(double)arg1;
- (bool)tracksLuma;
- (bool)usesGlobalGroupNamespace;
- (double)zoom;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

+ (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })mt_colorMatrixForOpacity:(double)arg1;
+ (id)mt_keyPathForColorMatrixDrivenInoperativeOpacity;
+ (id)mt_keyPathForColorMatrixDrivenOpacity;
+ (id)mt_orderedFilterTypes;
+ (id)mt_orderedFilterTypesBlurAtEnd;

- (void)_mt_applyFilterDescription:(id)arg1 remainingExistingFilters:(id)arg2 filterOrder:(id)arg3 removingIfIdentity:(bool)arg4;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithFilterOrder:(id)arg2;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2 andFilterOrder:(id)arg3;
- (void)_mt_removeFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2;
- (void)_mt_removeFilterOfTypeIfNecessary:(id)arg1;
- (void)_mt_setColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1 withName:(id)arg2 filterOrder:(id)arg3 removingIfIdentity:(bool)arg4;
- (void)_mt_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 filterOrder:(id)arg4 removingIfIdentity:(bool)arg5;
- (void)mt_applyMaterialDescription:(id)arg1 removingIfIdentity:(bool)arg2;
- (double)mt_colorMatrixDrivenInoperativeOpacity;
- (double)mt_colorMatrixDrivenOpacity;
- (void)mt_setColorMatrixDrivenInoperativeOpacity:(double)arg1 removingIfIdentity:(bool)arg2;
- (void)mt_setColorMatrixDrivenOpacity:(double)arg1 removingIfIdentity:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet

+ (id)backdropLayerWithGaussianBlurRadius:(double)arg1 brightnessAmount:(double)arg2 saturationAmount:(double)arg3;

@end
