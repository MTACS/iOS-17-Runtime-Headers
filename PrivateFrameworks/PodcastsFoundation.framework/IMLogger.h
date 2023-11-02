
@interface IMLogger : NSObject {
    NSString * _auxPath;
    NSFileHandle * _fileHandle;
    NSString * _filter;
    bool  _logTofileOnly;
    int  _pid;
    NSString * _procName;
    NSString * _runtimeOverride;
    NSRegularExpression * _runtimeOverrideRegex;
}

@property (nonatomic, copy) NSString *filter;
@property (copy) NSString *runtimeOverride;

+ (void)deleteRolledLogsForLogPath:(id)arg1 maxAge:(double)arg2;
+ (void)rollLogPath:(id)arg1 maxSize:(unsigned long long)arg2;
+ (id)rolledLogPrefix;
+ (id)sharedLogger;

- (void).cxx_destruct;
- (void)addRuntimeOverride:(id)arg1;
- (id)auxPath;
- (id)filter;
- (id)init;
- (void)logFile:(const char *)arg1 lineNumber:(int)arg2 format:(id)arg3;
- (void)logFunction:(const char *)arg1 format:(id)arg2;
- (void)logString:(id)arg1;
- (bool)logTofileOnly;
- (void)removeRuntimeOverride:(id)arg1;
- (id)runtimeOverride;
- (void)setAuxPath:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setLogToFileOnly:(bool)arg1;
- (void)setRuntimeOverride:(id)arg1;
- (bool)shouldOverrideCondition:(id)arg1 file:(id)arg2;

@end
