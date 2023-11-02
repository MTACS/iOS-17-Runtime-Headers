
@interface MKStandardMapConfiguration : MKMapConfiguration {
    long long  _emphasisStyle;
    bool  _showsHiking;
}

@property (getter=_allowsTerrainModePromotion, nonatomic, readonly) bool allowsTerrainModePromotion;
@property (nonatomic) long long emphasisStyle;
@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (getter=_showsHiking, setter=_setShowsHiking:, nonatomic) bool showsHiking;
@property (nonatomic) bool showsTraffic;

+ (bool)_overlayRequiresModernMap:(id)arg1;
+ (bool)_overlaySupportsElevation:(id)arg1;
+ (bool)_overlaysRequireModernMap:(id)arg1;
+ (bool)_overlaysSupportElevation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_addObserver:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3;
- (bool)_allowsTerrainModePromotion;
- (void)_removeObserver:(id)arg1 context:(void*)arg2;
- (void)_setShowsHiking:(bool)arg1;
- (bool)_showsHiking;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)emphasisStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithElevationStyle:(long long)arg1;
- (id)initWithElevationStyle:(long long)arg1 emphasisStyle:(long long)arg2;
- (id)initWithEmphasisStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStandardMapConfiguration:(id)arg1;
- (id)pointOfInterestFilter;
- (void)setEmphasisStyle:(long long)arg1;
- (void)setPointOfInterestFilter:(id)arg1;
- (void)setShowsTraffic:(bool)arg1;
- (bool)showsTraffic;

@end
