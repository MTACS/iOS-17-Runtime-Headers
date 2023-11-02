
@interface FetchLogArchivesReportGenerator : NetworkDiagnosticsReportGenerator

- (id)initWithQueue:(id)arg1;
- (void)setBaseDuration:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2;
- (void)setDefaults;
- (void)setHighVolumeLoggersDuration:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2;
- (void)setTTLDuration:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2;

@end
