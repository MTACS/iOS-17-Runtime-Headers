
@interface FCStatelessPersonalizationEnablementRequirements : NSObject {
    long long  _minimumAggregateCount;
    long long  _minimumEventCount;
}

@property (nonatomic) long long minimumAggregateCount;
@property (nonatomic) long long minimumEventCount;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (long long)minimumAggregateCount;
- (long long)minimumEventCount;
- (void)setMinimumAggregateCount:(long long)arg1;
- (void)setMinimumEventCount:(long long)arg1;

@end
