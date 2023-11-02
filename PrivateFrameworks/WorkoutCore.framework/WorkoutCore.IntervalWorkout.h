
@interface WorkoutCore.IntervalWorkout : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _cooldownBlock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _stepBlocks;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _warmupBlock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
