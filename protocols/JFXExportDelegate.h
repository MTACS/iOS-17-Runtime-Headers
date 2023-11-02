
@protocol JFXExportDelegate <NSObject>

@optional

- (void)didFinishExport:(long long)arg1;
- (void)exportAnalyticsForSessionBegin;
- (void)exportAnalyticsForSessionCompleteWithStatus:(long long)arg1 exportMachDuration:(unsigned long long)arg2;
- (void)exportProgressedTo:(float)arg1;

@end
