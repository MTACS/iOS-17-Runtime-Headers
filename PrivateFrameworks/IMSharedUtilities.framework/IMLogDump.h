
@interface IMLogDump : NSObject {
    NSObject<OS_dispatch_queue> * _logDumpQueue;
    bool  _shouldCollectPowerWifiStats;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *logDumpQueue;
@property (nonatomic, readonly) bool shouldCollectPowerWifiStats;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_calculateConnectedMinutesForDateKey:(id)arg1 durationKey:(id)arg2 daysDictionary:(id)arg3 totalDurationDictionary:(id)arg4 totalDurationKey:(id)arg5;
- (double)_calculateMinutesSyncingWithDurationKey:(id)arg1 attemptDateKey:(id)arg2;
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)arg1;
- (bool)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withPredicate:(id)arg3 withError:(id*)arg4;
- (void)_compressAndDeleteFilesAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)_dictionaryForDayKey:(id)arg1;
- (void)_includeCloudKitDebugFilesAtPath:(id)arg1;
- (void)_incrementSyncAttemptsWithKey:(id)arg1 syncDateKey:(id)arg2;
- (bool)_isOnPower;
- (bool)_isWifiUsable;
- (id)_lastHoursToAppend:(int)arg1;
- (void)_noteSyncEndedForDurationKey:(id)arg1 dateKey:(id)arg2;
- (id)_predicateToAppend:(id)arg1;
- (void)clearSyncStats;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 includeCKDebug:(bool)arg5 withCompletion:(id /* block */)arg6;
- (void)dumpMOCLoggingMetaData;
- (void)incrementAHDASyncAttempts;
- (void)incrementCoreDuetSyncAttempts;
- (id)init;
- (id)logDumpQueue;
- (id)logShowCommandToFilePath:(id)arg1 lastHours:(int)arg2 predicate:(id)arg3;
- (void)noteAHDASyncEnded;
- (void)noteCoreDuetSyncEnded;
- (void)printIfWeAreInTheMiddleOfASync;
- (void)printPowerAndWifiStats;
- (void)printSyncDurationStats;
- (bool)shouldCollectPowerWifiStats;

@end
