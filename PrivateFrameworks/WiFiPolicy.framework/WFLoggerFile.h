
@interface WFLoggerFile : WFLoggerBase {
    unsigned char  _classC;
    struct __CFDateFormatter { } * _dateFormatter;
    struct __CFString { } * _directoryPath;
    NSObject<OS_dispatch_source> * _eventSource;
    unsigned long long  _fileAgeOutInterval;
    struct __CFDate { } * _fileCreationDate;
    struct __CFString { } * _fileNamePrefix;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _filePtr;
    unsigned char  _isFileLoggingEnabled;
    unsigned long long  _level;
    struct __CFString { } * _logFilePath;
    NSNumber * _logLifespanInDays;
    NSObject<OS_dispatch_source> * _loggingTimer;
    unsigned char  _loggingTimerStarted;
    unsigned long long  _maxFileSizeInBytes;
    struct __CFString { } * _presetFilePath;
    unsigned long long  _privacy;
    struct __CFString { } * _runLoopMode;
    struct __CFRunLoop { } * _runLoopRef;
    unsigned long long  _timerInterval;
}

@property (getter=getLogDirPath, readonly) struct __CFString { }*logDirPath;
@property (getter=getLogFileNamePrefix, readonly) struct __CFString { }*logFileNamePrefix;
@property (getter=getLogFilePath, readonly) struct __CFString { }*logFilePath;

- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString { }*)arg3;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (struct __CFString { }*)changeLogFile:(unsigned char)arg1;
- (unsigned char)checkLogFileUpdate:(struct __CFString { }*)arg1;
- (void)cleanStaleLogs;
- (struct __CFString { }*)createDateString;
- (void)createLogFile:(struct __CFString { }*)arg1 fileClassC:(unsigned char)arg2;
- (void)dealloc;
- (unsigned char)doesLogFileExist:(struct __CFString { }*)arg1;
- (struct __CFString { }*)generateLogFileName;
- (struct __CFString { }*)getLogDirPath;
- (struct __CFString { }*)getLogFileNamePrefix;
- (struct __CFString { }*)getLogFilePath;
- (unsigned long long)getLogLevelEnable;
- (unsigned long long)getLogLevelPersist;
- (id)getLogLifespanInDays;
- (unsigned long long)getLogPrivacy;
- (unsigned long long)getMaxFileSizeInMB;
- (void)init:(id)arg1 runLoopRef:(struct __CFRunLoop { }*)arg2 runLoopMode:(struct __CFString { }*)arg3 classC:(unsigned char)arg4 dateFormatter:(struct __CFDateFormatter { }*)arg5 maxFileSizeInMB:(unsigned long long)arg6 logLifespanInDays:(unsigned long long)arg7;
- (id)initWithDirectoryPath:(id)arg1 dirPath:(struct __CFString { }*)arg2 fileNamePrefix:(struct __CFString { }*)arg3 runLoopRef:(struct __CFRunLoop { }*)arg4 runLoopMode:(struct __CFString { }*)arg5 classC:(unsigned char)arg6 dateFormatter:(struct __CFDateFormatter { }*)arg7 maxFileSizeInMB:(unsigned long long)arg8 logLifespanInDays:(unsigned long long)arg9 dispatchQueue:(id)arg10;
- (id)initWithFilePath:(id)arg1 filePath:(struct __CFString { }*)arg2 runLoopRef:(struct __CFRunLoop { }*)arg3 runLoopMode:(struct __CFString { }*)arg4 classC:(unsigned char)arg5 dateFormatter:(struct __CFDateFormatter { }*)arg6 maxFileSizeInMB:(unsigned long long)arg7 logLifespanInDays:(unsigned long long)arg8 dispatchQueue:(id)arg9;
- (id)mapLogLevelEnum:(unsigned long long)arg1;
- (void)removeLogFile:(const char *)arg1 maxAge:(double)arg2;
- (void)removeLogFilesFromDir:(const char *)arg1;
- (void)rotateLogFile:(struct __CFString { }*)arg1;
- (void)schedule:(unsigned char)arg1;
- (void)setLogLevelEnable:(unsigned long long)arg1;
- (void)setLogLevelPersist:(unsigned long long)arg1;
- (void)setLogLifespanInDays:(id)arg1;
- (void)setLogPrivacy:(unsigned long long)arg1;
- (void)setMaxFileSizeInMB:(unsigned long long)arg1;
- (void)startWatchingLogFile;
- (void)stopWatchingLogFile;
- (void)writeToFile:(unsigned long long)arg1 cfStrMsg:(struct __CFString { }*)arg2;

@end
