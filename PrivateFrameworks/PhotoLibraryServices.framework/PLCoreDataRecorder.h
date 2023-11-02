
@interface PLCoreDataRecorder : NSObject

+ (struct sqlite3 { }*)_dbHandleFromConnection:(id)arg1;
+ (bool)_installConnectionSwizzle;
+ (bool)_installRecorder;
+ (long long)_libraryIDForDb:(struct sqlite3 { }*)arg1;
+ (void)_recordExecutedStatement:(struct sqlite3_stmt { }*)arg1 db:(struct sqlite3 { }*)arg2 normalizedSQL:(id)arg3 expandedSQL:(id)arg4 plan:(id)arg5 duration:(double)arg6 pageHitCountBeforeExecution:(int)arg7 pageMissCountBeforeExecution:(int)arg8;
+ (id)_recordedStatementsAndReset:(bool)arg1;
+ (void)_reset;
+ (bool)_shouldRecordPhotoLibraryDb:(struct sqlite3 { }*)arg1;
+ (bool)isRecording;
+ (id)recordedStatements;
+ (id)recordedStatementsAndReset;
+ (id)recordedStatementsDescription;
+ (bool)startRecordingForLibraries:(id)arg1 limitToMarkedThreads:(bool)arg2 includeBindVariables:(bool)arg3 includeIOMetrics:(bool)arg4 entryDecorator:(id /* block */)arg5 entriesAvailableHandler:(id /* block */)arg6;
+ (bool)stopRecording;

@end
