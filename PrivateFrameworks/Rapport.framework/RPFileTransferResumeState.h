
@interface RPFileTransferResumeState : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _flushInterval;
    NSObject<OS_dispatch_source> * _flushTimer;
    bool  _isPlaceholder;
    bool  _needsFlushing;
    NSString * _outputPath;
    NSString * _stateFilePath;
    NSMutableDictionary * _stateInfo;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double flushInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *flushTimer;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic) bool needsFlushing;
@property (nonatomic, retain) NSString *outputPath;
@property (nonatomic, retain) NSString *stateFilePath;
@property (nonatomic) struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*ucat;

- (void).cxx_destruct;
- (id)activeFileWithFileName:(id)arg1;
- (id)activeFiles;
- (bool)addActiveFile:(id)arg1;
- (bool)addFinishedFile:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)dispatchQueue;
- (id)finishedFileWithFileName:(id)arg1;
- (id)finishedFiles;
- (double)flushInterval;
- (bool)flushStateFile;
- (id)flushTimer;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithDispatchQueue:(id)arg1;
- (void)invalidate;
- (bool)isEmpty;
- (bool)isPlaceholder;
- (bool)loadStateFile;
- (bool)needsFlushing;
- (id)outputPath;
- (bool)removeActiveFile:(id)arg1;
- (bool)removeAllActiveAndFinishedFileItems;
- (bool)removeFinishedFile:(id)arg1;
- (bool)removeStateFile;
- (bool)removeUnusableOutputFileItems;
- (bool)removeUnusableSourceFileItems;
- (bool)scheduleStateFileFlush;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlushInterval:(double)arg1;
- (void)setFlushTimer:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setNeedsFlushing:(bool)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setStateFilePath:(id)arg1;
- (void)setUcat:(struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)arg1;
- (id)stateFilePath;
- (struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)ucat;
- (id)version;

@end
