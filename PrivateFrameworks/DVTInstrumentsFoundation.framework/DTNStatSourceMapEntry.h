
@interface DTNStatSourceMapEntry : NSObject {
    XRNetworkingServiceObservationTuple * _lastStats;
    int  _pid;
    long long  _serialNumber;
}

@property (nonatomic, retain) XRNetworkingServiceObservationTuple *lastStats;
@property (nonatomic) int pid;
@property (nonatomic, readonly) long long serialNumber;

- (void).cxx_destruct;
- (id)lastStats;
- (int)pid;
- (long long)serialNumber;
- (void)setLastStats:(id)arg1;
- (void)setPid:(int)arg1;

@end
