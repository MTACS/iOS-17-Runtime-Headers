
@interface PHImportResults : PHImportExceptionRecorder {
    NSDate * _endTime;
    PHImportException * _highestPriorityException;
    NSMutableArray * _importRecords;
    PHImportSource * _importSource;
    NSMutableDictionary * _pmrInfo;
    unsigned char  _result;
    NSDate * _startTime;
    NSString * _uuid;
}

@property (nonatomic, retain) NSDate *endTime;
@property (readonly) NSError *error;
@property (readonly) unsigned long long failedToImportCount;
@property (readonly) PHImportException *highestPriorityException;
@property (nonatomic, retain) NSMutableArray *importRecords;
@property (readonly) PHImportSource *importSource;
@property (readonly) unsigned long long importedCount;
@property (nonatomic, retain) NSMutableDictionary *pmrInfo;
@property (nonatomic) unsigned char result;
@property (nonatomic, retain) NSDate *startTime;
@property (retain) NSString *uuid;

+ (id)resultsWithException:(id)arg1;
+ (id)resultsWithExceptions:(id)arg1;

- (void).cxx_destruct;
- (void)addImportRecord:(id)arg1;
- (void)addUnsupportedPath:(id)arg1;
- (id)endTime;
- (id)error;
- (id)exceptions;
- (unsigned long long)failedToImportCount;
- (id)generatePMRInfo;
- (id)highestPriorityException;
- (id)importRecordExceptions;
- (id)importRecords;
- (id)importSource;
- (unsigned long long)importedCount;
- (id)init;
- (void)insertStart:(id)arg1 end:(id)arg2 intoGroups:(id)arg3 ofType:(unsigned long long)arg4;
- (void)log:(id)arg1 activity:(id)arg2 description:(id)arg3 digits:(unsigned long long)arg4;
- (void)logPMR;
- (id)pmrInfo;
- (unsigned char)result;
- (double)runTime;
- (void)setEndTime:(id)arg1;
- (void)setImportRecords:(id)arg1;
- (void)setPmrInfo:(id)arg1;
- (void)setResult:(unsigned char)arg1;
- (void)setStartTime:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)startTime;
- (id)uuid;
- (void)verifyGroups:(id)arg1;

@end
