
@interface WFLoggerCircularBuffer : WFLoggerBase {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _dumpId;
    NSDateFormatter * _tsFormatter;
    long long  _wiFiLoggingLogBufferIndex;
    long long  _wiFiLoggingLogBufferMaxSize;
    char * _wiFiLoggingLogBufferRef;
}

- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString { }*)arg3;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (void)dealloc;
- (void)dump;
- (id)init;

@end
