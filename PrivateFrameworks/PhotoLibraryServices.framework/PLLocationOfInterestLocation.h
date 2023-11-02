
@interface PLLocationOfInterestLocation : NSObject {
    CLLocation * _location;
    double  _uncertainty;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double uncertainty;

- (void).cxx_destruct;
- (id)description;
- (double)distanceFromLocation:(id)arg1 withTypeRadius:(double)arg2;
- (id)initWithLocation:(id)arg1 uncertainty:(double)arg2;
- (id)location;
- (double)uncertainty;

@end
