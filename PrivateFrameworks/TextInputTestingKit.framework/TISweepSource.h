
@interface TISweepSource : NSObject {
    NSMutableDictionary * debugValues;
    int  stepCount;
}

@property (nonatomic, readonly) NSMutableDictionary *debugValues;
@property (nonatomic) int stepCount;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addValue:(id)arg1 withMin:(float)arg2 withMax:(float)arg3;
- (void)addValue:(id)arg1 withValue:(float)arg2;
- (void)advanceSweep;
- (id)debugValues;
- (bool)finished;
- (void)setStepCount:(int)arg1;
- (int)stepCount;
- (id)sweepStateHeader;
- (id)sweepStateValues;

@end
