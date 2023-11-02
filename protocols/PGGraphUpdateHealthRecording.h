
@protocol PGGraphUpdateHealthRecording <NSObject>

@required

- (void)beginRecording;
- (void)endRecordingInBackground:(bool)arg1;
- (void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(bool)arg2;
- (void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(bool)arg2;
- (void)recordNumberOfDaysSinceMajorOSUpgrade:(unsigned long long)arg1;
- (void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
- (void)recordTransactionSize:(unsigned long long)arg1;

@end
