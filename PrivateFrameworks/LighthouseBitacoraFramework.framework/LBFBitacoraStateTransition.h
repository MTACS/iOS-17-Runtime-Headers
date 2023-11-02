
@interface LBFBitacoraStateTransition : NSObject {
    long long  _previousState;
    long long  _state;
    double  _timedelta;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) long long previousState;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) double timedelta;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)initWithBitcoraState:(long long)arg1 previousState:(long long)arg2 timestamp:(id)arg3 timedelta:(double)arg4;
- (long long)previousState;
- (long long)state;
- (double)timedelta;
- (id)timestamp;

@end
