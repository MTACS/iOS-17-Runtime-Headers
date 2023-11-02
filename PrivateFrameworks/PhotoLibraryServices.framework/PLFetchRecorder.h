
@interface PLFetchRecorder : NSObject <NSSQLiteDatabaseTraceDelegate> {
    NSObject<OS_dispatch_queue> * _fileWatcherQueue;
    NSObject<OS_dispatch_source> * _fileWatcherSource;
    PLFetchRecording * _recording;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_findRecordingsWithinURL:(id)arg1;
+ (struct PLFetchRecorderSQLGeneralizationResult { id x1; id x2; })_generalizedStringByFactoringOutInClausesFromSQL:(id)arg1;
+ (id)_generalizedStringByFactoringOutLimitClauseFrom:(id)arg1;
+ (bool)_isRecordingFileFromURL:(id)arg1;
+ (id)_paramStringFromBindVariableComponent:(id)arg1;
+ (id)fileURLsToExistingRecordings;
+ (struct PLFetchRecorderSQLGeneralizationResult { id x1; id x2; })generalizedSQLFromSQL:(id)arg1 bindVariables:(id)arg2 fromFetchRequest:(id)arg3;
+ (bool)isCurrentProcessEnabledForRecordingBundle:(id)arg1;
+ (id)sqlFromGeneralizedSQL:(id)arg1 bindVars:(id)arg2 multiInCounts:(id)arg3;

- (void).cxx_destruct;
- (void)_startRecording;
- (void)_startWatchingRecordingFile;
- (void)_stopRecording;
- (void)_stopWatchingRecordingFile;
- (id)init;
- (void)managedObjectContext:(id)arg1 didExecuteFetchRequest:(id)arg2 withSQLString:(id)arg3 bindVariables:(id)arg4 rowCount:(long long)arg5;
- (void)managedObjectContext:(id)arg1 willExecuteFetchRequest:(id)arg2;

@end
