
@interface PDFTimer : NSObject {
    PDFTimerPrivate * _private;
}

- (void).cxx_destruct;
- (void)_execute;
- (void)cancel;
- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 forTarget:(id)arg2;
- (id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3;
- (bool)isUpdateQueued;
- (void)update;

@end
