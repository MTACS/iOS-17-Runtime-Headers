
@interface RBHistoricalStatistics : NSObject <RBHistoricalStatisticsMaintaining> {
    unsigned long long  _currentAsserions;
    unsigned long long  _currentClients;
    unsigned long long  _currentMonitors;
    unsigned long long  _currentProcesses;
    unsigned long long  _frequency;
    unsigned long long  _peakAssertions;
    unsigned long long  _peakClients;
    unsigned long long  _peakMonitors;
    unsigned long long  _peakProcesses;
    unsigned long long  _period;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithReportFrequency:(unsigned long long)arg1;
- (void)notifyAssertionCount:(unsigned long long)arg1;
- (void)notifyClientCount:(unsigned long long)arg1;
- (void)notifyMonitorCount:(unsigned long long)arg1;
- (void)notifyProcessCount:(unsigned long long)arg1;

@end
