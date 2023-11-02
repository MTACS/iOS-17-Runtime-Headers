
@interface VKTimer : NSObject {
    double  _nextFireDate;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, readonly) double nextFireDate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)disable;
- (void)fireAfter:(double)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3;
- (void)invalidate;
- (double)nextFireDate;

@end
