
@interface ADVisualLoggerHandler : ADLogManagerHandler {
    struct VZDestination { } * _fileDestination;
    NSString * _loggerName;
    struct VZDestination { } * _networkDestination;
    bool  _synchronousFileLogging;
    struct VZLogger { } * _visualLogger;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)logCalibration:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logDictionary:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logMatrix4x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logPixelBuffer:(struct __CVBuffer { }*)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logPointCloud:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logRawBuffer:(void*)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 timestamp:(double)arg4;
- (void)logString:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (id)name;
- (void)postDisable;
- (void)preEnable;
- (long long)removeFileSettings;
- (long long)removeHostSettings;
- (long long)setHostName:(id)arg1;
- (long long)setLogFolder:(id)arg1;

@end
