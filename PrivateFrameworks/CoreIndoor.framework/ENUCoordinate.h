
@interface ENUCoordinate : NSObject {
    double  _east;
    double  _north;
    double  _up;
}

@property (nonatomic) double east;
@property (nonatomic) double north;
@property (nonatomic) double up;

+ (id)fromLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 andEcefPoint:(id)arg3;

- (double)east;
- (id)init;
- (id)initWithEast:(double)arg1 north:(double)arg2 up:(double)arg3;
- (double)north;
- (void)setEast:(double)arg1;
- (void)setFromLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 andEcefPoint:(id)arg3;
- (void)setNorth:(double)arg1;
- (void)setUp:(double)arg1;
- (double)up;

@end
