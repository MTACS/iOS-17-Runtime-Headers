
@interface PPMockRTLocation : NSObject {
    double  _latitude;
    double  _longitude;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (double)latitude;
- (double)longitude;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;

@end
