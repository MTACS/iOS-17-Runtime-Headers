
@interface AXFKAFocusRingShapeLayer : CAShapeLayer {
    AXFKAFocusRingBorderShapeLayer * _bottomBorderLayer;
    long long  _interfaceStyle;
    unsigned long long  _kind;
}

@property (nonatomic, retain) AXFKAFocusRingBorderShapeLayer *bottomBorderLayer;
@property (nonatomic, readonly) bool increaseContrast;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) unsigned long long kind;
@property (nonatomic, readonly) struct CGColor { }*ringColorRef;
@property (nonatomic, readonly) bool useDefaultRingColor;
@property (nonatomic, readonly) bool useLargeRing;

+ (id)focusLayerForUserInterfaceStyle:(long long)arg1;
+ (id)layerWithStyle:(long long)arg1 kind:(unsigned long long)arg2;
+ (id)parentLayerForUserInterfaceStyle:(long long)arg1;
+ (id)selectedLayerForUserInterfaceStyle:(long long)arg1;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_updateBottomLayerPath;
- (double)borderScale;
- (id)bottomBorderLayer;
- (id)bottomFocusRingColorForTintColor:(id)arg1;
- (void)dealloc;
- (id)fillColorForBottomLayer;
- (bool)increaseContrast;
- (id)init;
- (double)insetForFocusRingBorder:(id)arg1;
- (long long)interfaceStyle;
- (unsigned long long)kind;
- (double)lineWidthForBottomLayer;
- (struct CGColor { }*)ringColorRef;
- (void)setBottomBorderLayer:(id)arg1;
- (void)setInterfaceStyle:(long long)arg1;
- (void)setKind:(unsigned long long)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (struct CGColor { }*)strokeColorForBottomLayer;
- (id)tintColor;
- (void)updateAppearance;
- (bool)useDefaultRingColor;
- (bool)useLargeRing;

@end
