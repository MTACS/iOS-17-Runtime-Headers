
@interface SUUIRunLoopDelay : NSObject {
    NSString * _mode;
    struct __CFRunLoop { } * _runLoop;
    struct __CFRunLoopSource { } * _runLoopSource;
    double  _timeout;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)delayRunLoop;
- (void)endDelay;
- (id)initWithRunLoopMode:(id)arg1 timeout:(double)arg2;

@end
