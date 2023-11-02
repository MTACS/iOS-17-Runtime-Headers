
@interface MKHybridMapConfiguration : MKMapConfiguration

@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) bool showsTraffic;

+ (bool)supportsSecureCoding;

- (id)init;
- (id)initWithElevationStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHybridMapConfiguration:(id)arg1;
- (id)pointOfInterestFilter;
- (void)setPointOfInterestFilter:(id)arg1;
- (void)setShowsTraffic:(bool)arg1;
- (bool)showsTraffic;

@end
