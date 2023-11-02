
@interface VMUTask : NSObject {
    NSString * _coreFilePath;
    unsigned int  _liveTask;
    VMUProcessDescription * _processDescription;
    bool  _processDescriptionInitialized;
    bool  _taskIsSelf;
    VMUTaskMemoryCache * _taskMemory;
    unsigned long long  _taskType;
}

@property (nonatomic, readonly) unsigned long long taskType;

- (void).cxx_destruct;
- (id)coreFilePath;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })createSymbolicatorWithFlags:(unsigned int)arg1 andNotification:(id /* block */)arg2;
- (void)dealloc;
- (bool)hasStartedWithErrorString:(const char **)arg1;
- (id)initWithCorePath:(id)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)ioSurfaceDescriptions;
- (bool)isCore;
- (bool)isTranslated;
- (id)memoryCache;
- (int)pid;
- (id)processDescription;
- (bool)taskIsSelf;
- (unsigned int)taskPort;
- (unsigned long long)taskType;

@end
