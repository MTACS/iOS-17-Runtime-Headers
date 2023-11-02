
@interface PGGraphUpdateHealthRecorder : NSObject <PGGraphUpdateHealthRecording> {
    CPAnalytics * _analytics;
    bool  _changeConsumer;
    unsigned long long  _maximumTransactionSize;
    unsigned long long  _numberOfDatabaseChangesConvertedToGraphChangesInBackground;
    unsigned long long  _numberOfDatabaseChangesConvertedToGraphChangesInForeground;
    unsigned long long  _numberOfDatabaseChangesReceivedInBackground;
    unsigned long long  _numberOfDatabaseChangesReceivedInForeground;
    unsigned long long  _numberOfTimesGraphUpdatePaused;
}

@property (getter=isChangeConsumer, nonatomic, readonly) bool changeConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumTransactionSize;
@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInBackground;
@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInForeground;
@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesReceivedInBackground;
@property (nonatomic, readonly) unsigned long long numberOfDatabaseChangesReceivedInForeground;
@property (nonatomic, readonly) unsigned long long numberOfTimesGraphUpdatePaused;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRecording;
- (void)endRecordingInBackground:(bool)arg1;
- (id)initForChangeConsumer:(bool)arg1 analytics:(id)arg2;
- (bool)isChangeConsumer;
- (unsigned long long)maximumTransactionSize;
- (unsigned long long)numberOfDatabaseChangesConvertedToGraphChangesInBackground;
- (unsigned long long)numberOfDatabaseChangesConvertedToGraphChangesInForeground;
- (unsigned long long)numberOfDatabaseChangesReceivedInBackground;
- (unsigned long long)numberOfDatabaseChangesReceivedInForeground;
- (unsigned long long)numberOfTimesGraphUpdatePaused;
- (void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(bool)arg2;
- (void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(bool)arg2;
- (void)recordNumberOfDaysSinceMajorOSUpgrade:(unsigned long long)arg1;
- (void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
- (void)recordTransactionSize:(unsigned long long)arg1;

@end
