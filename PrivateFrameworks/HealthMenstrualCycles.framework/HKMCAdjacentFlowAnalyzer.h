
@interface HKMCAdjacentFlowAnalyzer : NSObject {
    long long  _flowDayIndex;
    long long  _futureFlowDay;
    long long  _pastFlowDay;
    bool  _unsuitableForRange;
}

@property (nonatomic, readonly) long long flowDayIndex;
@property (getter=isUnsuitableForRange, nonatomic, readonly) bool unsuitableForRange;

- (void)addNextAscendingDay:(id)arg1 shouldStop:(bool*)arg2;
- (void)addNextDescendingDay:(id)arg1 shouldStop:(bool*)arg2;
- (long long)flowDayIndex;
- (struct { long long x1; long long x2; })flowDayIndexRange;
- (id)initWithFlowDayIndex:(long long)arg1;
- (bool)isUnsuitableForRange;

@end
