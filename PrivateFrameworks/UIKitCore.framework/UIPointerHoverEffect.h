
@interface UIPointerHoverEffect : UIPointerEffect {
    bool  __tintViewTakesOnPointerShape;
    bool  __tintViewUsesPointerMaterial;
    long long  _preferredTintMode;
    bool  _prefersScaledContent;
    bool  _prefersShadow;
}

@property (nonatomic) bool _tintViewTakesOnPointerShape;
@property (nonatomic) bool _tintViewUsesPointerMaterial;
@property (nonatomic) long long preferredTintMode;
@property (nonatomic) bool prefersScaledContent;
@property (nonatomic) bool prefersShadow;

- (bool)_tintViewTakesOnPointerShape;
- (bool)_tintViewUsesPointerMaterial;
- (unsigned long long)constrainedAxes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (long long)preferredTintMode;
- (bool)prefersScaledContent;
- (bool)prefersShadow;
- (void)setPreferredTintMode:(long long)arg1;
- (void)setPrefersScaledContent:(bool)arg1;
- (void)setPrefersShadow:(bool)arg1;
- (void)set_tintViewTakesOnPointerShape:(bool)arg1;
- (void)set_tintViewUsesPointerMaterial:(bool)arg1;
- (id)settings;

@end
