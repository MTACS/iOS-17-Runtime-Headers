
@interface ODCurareDataCachePruningPolicyObject : NSObject {
    long long  _maximumNumberOfDays;
    long long  _maximumNumberOfEvents;
}

@property (nonatomic) long long maximumNumberOfDays;
@property (nonatomic) long long maximumNumberOfEvents;

- (id)initWithMaximumNumberOfDays:(int)arg1 maximumNumberOfEvents:(int)arg2;
- (long long)maximumNumberOfDays;
- (long long)maximumNumberOfEvents;
- (void)setMaximumNumberOfDays:(long long)arg1;
- (void)setMaximumNumberOfEvents:(long long)arg1;

@end
