
@interface C2Route : NSObject {
    NSString * _destination;
    double  _lastUpdated;
}

@property (nonatomic, retain) NSString *destination;
@property (nonatomic) double lastUpdated;

- (void).cxx_destruct;
- (id)destination;
- (double)lastUpdated;
- (void)setDestination:(id)arg1;
- (void)setLastUpdated:(double)arg1;

@end
