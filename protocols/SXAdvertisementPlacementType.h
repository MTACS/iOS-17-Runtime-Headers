
@protocol SXAdvertisementPlacementType <SXAutoPlacementType>

@required

- (unsigned long long)bannerType;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })distanceFromMedia;
- (unsigned long long)frequency;

@end
