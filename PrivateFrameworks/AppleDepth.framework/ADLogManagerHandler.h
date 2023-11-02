
@interface ADLogManagerHandler : NSObject {
    bool  _active;
    bool  _humanReadableFormat;
}

@property (nonatomic) bool active;
@property (nonatomic) bool humanReadableFormat;

- (bool)active;
- (bool)humanReadableFormat;
- (void)logCalibration:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logDictionary:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logPixelBuffer:(struct __CVBuffer { }*)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logPointCloud:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (void)logRawBuffer:(void*)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 timestamp:(double)arg4;
- (void)logString:(id)arg1 name:(const char *)arg2 timestamp:(double)arg3;
- (id)name;
- (void)postDisable;
- (void)preEnable;
- (void)setActive:(bool)arg1;
- (long long)setHostName:(id)arg1;
- (void)setHumanReadableFormat:(bool)arg1;
- (long long)setLogFolder:(id)arg1;

@end
