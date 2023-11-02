
@interface ADLogManager : NSObject {
    int  _activeHandlersCounter;
    NSSet * _enabledLoggerOverrideSet;
    bool  _forceAllPriorities;
    NSMutableArray * _handlers;
    NSString * _hostName;
    bool  _humanReadableFormat;
    NSString * _logFolder;
    unsigned long long  _loggingPriority;
}

@property (nonatomic, readonly) bool enabled;
@property (nonatomic) bool humanReadableFormat;
@property (nonatomic) unsigned long long loggingPriority;

+ (id)defaultLoggerWithName:(id)arg1;

- (void).cxx_destruct;
- (long long)addHandler:(id)arg1;
- (void)applyConfigurationToNewHandler:(id)arg1;
- (void)dealloc;
- (void)disable:(id)arg1;
- (void)disableAll;
- (void)disableFileLogging;
- (void)disableVisualLogging;
- (void)enable:(id)arg1;
- (void)enableAll;
- (void)enableFileLogging;
- (void)enableVisualLogging;
- (bool)enabled;
- (bool)getHumanReadableFormat;
- (bool)humanReadableFormat;
- (id)init;
- (id)initWithHandlers:(id)arg1;
- (void)logCalibration:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3;
- (void)logCalibration:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)logCalibration:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logDictionary:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3;
- (void)logDictionary:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)logDictionary:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logMatrix4x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 priority:(unsigned long long)arg3;
- (void)logMatrix4x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 priority:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)logMatrix4x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 priority:(unsigned long long)arg3;
- (void)logMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 priority:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)logMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logPixelBuffer:(struct __CVBuffer { }*)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3;
- (void)logPixelBuffer:(struct __CVBuffer { }*)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)logPixelBuffer:(struct __CVBuffer { }*)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logPointCloud:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3;
- (void)logPointCloud:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)logPointCloud:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logRawBuffer:(void*)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 priority:(unsigned long long)arg4;
- (void)logRawBuffer:(void*)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 priority:(unsigned long long)arg4 timestamp:(double)arg5;
- (void)logRawBuffer:(void*)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 timestamp:(double)arg4;
- (void)logString:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3;
- (void)logString:(id)arg1 name:(const char *)arg2 priority:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)logString:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (unsigned long long)loggingPriority;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)setHostName:(id)arg1;
- (void)setHumanReadableFormat:(bool)arg1;
- (long long)setLogFolder:(id)arg1;
- (void)setLoggingPriority:(unsigned long long)arg1;
- (void)toggleByClass:(Class)arg1 enable:(bool)arg2;
- (void)toggleHandler:(id)arg1 enable:(bool)arg2;
- (id)visualLoggerPrefices;

@end
