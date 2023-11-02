
@interface OADDrawableProperties : OADProperties {
    unsigned int  mAspectRatioLocked;
    OADHyperlink * mClickHyperlink;
    NSString * mDescription;
    unsigned int  mHasAspectRatioLocked;
    unsigned int  mHasWrdInline;
    OADHyperlink * mHoverHyperlink;
    OADOrientedBounds * mOrientedBounds;
    NSString * mTitle;
    unsigned int  mWrdInline;
}

- (void).cxx_destruct;
- (id)altDescription;
- (id)altTitle;
- (id)clickHyperlink;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (bool)hasAltDescription;
- (bool)hasAltTitle;
- (bool)hasAspectRatioLocked;
- (bool)hasClickHyperlink;
- (bool)hasHoverHyperlink;
- (bool)hasOrientedBounds;
- (bool)hasWrdInline;
- (unsigned long long)hash;
- (id)hoverHyperlink;
- (id)initWithDefaults;
- (bool)isAspectRatioLocked;
- (bool)isEqual:(id)arg1;
- (bool)isWrdInline;
- (id)orientedBounds;
- (id)orientedBoundsForCharts;
- (void)removeUnnecessaryOverrides;
- (void)setAltDescription:(id)arg1;
- (void)setAltTitle:(id)arg1;
- (void)setAspectRatioLocked:(bool)arg1;
- (void)setClickHyperlink:(id)arg1;
- (void)setHoverHyperlink:(id)arg1;
- (void)setOrientedBounds:(id)arg1;
- (void)setWrdInline:(bool)arg1;

@end
