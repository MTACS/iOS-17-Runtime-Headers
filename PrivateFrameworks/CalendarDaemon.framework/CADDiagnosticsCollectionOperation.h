
@interface CADDiagnosticsCollectionOperation : NSOperation <CADDiagnosticLogCollector, CADDiagnosticLogContext> {
    int  _batchDepth;
    NSMutableSet * _changedFiles;
    NSURL * _completedLogDirectoryURL;
    ClientConnection * _conn;
    NSDateFormatter * _dateFormatter;
    NSMutableDictionary * _files;
    bool  _finished;
    NSURL * _incomingLogDirectoryURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSURL * _logDirectoryURL;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _logFile;
    NSURL * _logFileURL;
    long long  _options;
    NSMutableSet * _temporaryFileNames;
    unsigned int  _token;
}

@property (nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool redactLogs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int token;

- (void).cxx_destruct;
- (id)_createLogDirectory;
- (id)_createLogFile;
- (id)_randomString;
- (void)batch:(id /* block */)arg1;
- (bool)canceled;
- (void)collect:(id)arg1;
- (void)deleteTemporaryFile:(id)arg1;
- (void)determineExpectedOutputFiles:(id)arg1;
- (id)finalFileForFile:(id)arg1;
- (void)finish;
- (id)initWithConnection:(id)arg1 token:(unsigned int)arg2 options:(long long)arg3;
- (id)loadLogCollectors;
- (void)log:(id)arg1;
- (void)logError:(id)arg1;
- (void)logWithLevel:(unsigned char)arg1 formatString:(id)arg2 arguments:(char *)arg3;
- (void)main;
- (bool)redactLogs;
- (void)reportFileStatusChangesToClient;
- (void)setStatus:(unsigned long long)arg1 forFile:(id)arg2;
- (id)temporaryFileForName:(id)arg1;
- (unsigned int)token;

@end
