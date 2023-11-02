
@interface _UIZoomEffect : UIVisualEffect {
    bool  _isUnderlay;
    double  _zoomAmount;
}

+ (id)_underlayZoomEffectWithMagnitude:(double)arg1;
+ (bool)supportsSecureCoding;
+ (id)zoomEffectWithMagnitude:(double)arg1;

- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)_viewEntry;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
