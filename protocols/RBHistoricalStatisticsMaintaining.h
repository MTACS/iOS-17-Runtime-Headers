
@protocol RBHistoricalStatisticsMaintaining <NSObject>

@required

- (id)initWithReportFrequency:(unsigned long long)arg1;
- (void)notifyAssertionCount:(unsigned long long)arg1;
- (void)notifyClientCount:(unsigned long long)arg1;
- (void)notifyMonitorCount:(unsigned long long)arg1;
- (void)notifyProcessCount:(unsigned long long)arg1;

@end
