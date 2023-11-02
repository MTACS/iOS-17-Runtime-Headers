
@interface SFRSSIQueue : NSObject {
    NSMutableArray * _rssiValues;
    NSMutableArray * _tickValues;
}

@property (nonatomic, readonly) double velocity;
@property (nonatomic, readonly) double velocitySmoothed;

- (void).cxx_destruct;
- (void)addSample:(double)arg1 atTicks:(unsigned long long)arg2;
- (double)velocity;
- (double)velocityFromA:(unsigned long long)arg1 toB:(unsigned long long)arg2;
- (double)velocitySmoothed;

@end
