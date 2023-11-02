
@interface WebScreenOrientationObserver : NSObject {
    void * _provider;
}

@property (nonatomic) void*provider;

- (void)_screenOrientationDidChange;
- (void)dealloc;
- (id)initWithProvider:(void*)arg1;
- (void*)provider;
- (void)setProvider:(void*)arg1;

@end
