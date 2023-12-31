
@interface OADGradientFill : OADFill {
    int  mFlipMode;
    bool  mIsFlipModeOverridden;
    bool  mIsRotateWithShapeOverridden;
    bool  mRotateWithShape;
    OADShade * mShade;
    NSArray * mStops;
    OADRelativeRect * mTileRect;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)arg1;

- (void).cxx_destruct;
- (bool)areStopsOverridden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firstStop;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (int)flipMode;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isFlipModeOverridden;
- (bool)isRotateWithShapeOverridden;
- (bool)isShadeOverridden;
- (bool)isTileRectOverridden;
- (id)lastStop;
- (void)removeUnnecessaryOverrides;
- (bool)rotateWithShape;
- (void)setFlipMode:(int)arg1;
- (void)setParent:(id)arg1;
- (void)setRotateWithShape:(bool)arg1;
- (void)setShade:(id)arg1;
- (void)setStops:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTileRect:(id)arg1;
- (id)shade;
- (void)sortStops;
- (id)stops;
- (id)tileRect;
- (bool)usesPlaceholderColor;

@end
