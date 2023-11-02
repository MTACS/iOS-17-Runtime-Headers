
@interface _SBMachContinuousStopwatch : NSObject {
    bool  _active;
    unsigned long long  _priorAccumulatedTime;
    unsigned long long  _startTime;
}

- (id)init;

@end
