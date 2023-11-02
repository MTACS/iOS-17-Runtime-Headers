
@interface BLSHFlipbookRequestDatesTelemetryData : NSObject {
    double  _averageInterval;
    double  _completionDuration;
    bool  _didReset;
    NSArray * _environmentIdentifiers;
    double  _longestInterval;
    double  _shortestInterval;
    unsigned long long  _timedOutCount;
    double  _timestamp;
}

@property (nonatomic, readonly) double averageInterval;
@property (nonatomic, readonly) double completionDuration;
@property (nonatomic, readonly) bool didReset;
@property (nonatomic, readonly) unsigned int environmentCount;
@property (nonatomic, readonly) NSArray *environmentIdentifiers;
@property (nonatomic, readonly) NSString *firstEnvironmentIdentifier;
@property (nonatomic, readonly) double longestInterval;
@property (nonatomic, readonly) double shortestInterval;
@property (nonatomic, readonly) unsigned long long timedOutCount;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (double)averageInterval;
- (double)completionDuration;
- (id)description;
- (bool)didReset;
- (unsigned int)environmentCount;
- (id)environmentIdentifiers;
- (id)firstEnvironmentIdentifier;
- (id)initWithTimestamp:(double)arg1 environmentIdentifiers:(id)arg2 shortestInterval:(double)arg3 averageInterval:(double)arg4 longestInterval:(double)arg5 completionDuration:(double)arg6 didReset:(bool)arg7 timedOutCount:(unsigned int)arg8;
- (double)longestInterval;
- (double)shortestInterval;
- (unsigned long long)timedOutCount;
- (double)timestamp;

@end
