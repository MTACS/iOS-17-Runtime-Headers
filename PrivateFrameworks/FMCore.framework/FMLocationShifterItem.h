
@interface FMLocationShifterItem : NSObject {
    double  _accuracy;
    id  _context;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSError * _error;
    bool  _shifted;
    NSDate * _timestamp;
}

@property (nonatomic) double accuracy;
@property (nonatomic, readonly) id context;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool shifted;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (double)accuracy;
- (id)context;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4;
- (void)setAccuracy:(double)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setError:(id)arg1;
- (void)setShifted:(bool)arg1;
- (bool)shifted;
- (id)timestamp;

@end
