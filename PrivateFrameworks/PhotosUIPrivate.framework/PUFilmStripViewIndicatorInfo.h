
@interface PUFilmStripViewIndicatorInfo : NSObject {
    double  _normalizedLocation;
    UIColor * _preferredColor;
}

@property (nonatomic, readonly) double normalizedLocation;
@property (nonatomic, readonly) UIColor *preferredColor;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLocation:(double)arg1 preferredColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)normalizedLocation;
- (id)preferredColor;

@end
