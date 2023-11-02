
@interface ATXModeEntityAffinityVector : NSObject {
    NSArray * _affinityVector;
}

@property (nonatomic, readonly) NSArray *affinityVector;

+ (id)centroid:(id)arg1;
+ (id)weightedCentroid:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithAffinityVector:(id)arg1;
- (id)affinityVector;
- (id)description;
- (id)init;
- (id)initWithAffinities:(id)arg1;
- (id)initWithAffinities:(id)arg1 shouldResize:(bool)arg2;
- (bool)isZeroVector;
- (double)magnitude;
- (id)prettyDescription;
- (void)resizeToUnit;
- (double)scoreForMode:(unsigned long long)arg1;
- (id)sortedAffinities;

@end
