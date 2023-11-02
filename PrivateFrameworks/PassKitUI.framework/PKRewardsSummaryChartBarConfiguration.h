
@interface PKRewardsSummaryChartBarConfiguration : NSObject <PKSegmentedBarConfiguration> {
    PKAccountRewardsTierSummary * _summary;
    NSArray * _tierAmounts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKAccountRewardsTierSummary *summary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_rewardsTierForIndex:(long long)arg1;
- (id)_valueAtIndex:(long long)arg1;
- (id)colorForSegmentAtIndex:(long long)arg1;
- (id)initWithSummary:(id)arg1;
- (bool)isReady;
- (long long)numberOfSegments;
- (id)summary;
- (double)totalValue;
- (double)valueForSegmentAtIndex:(long long)arg1;

@end
