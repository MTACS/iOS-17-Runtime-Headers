
@interface IOSAManager : NSObject {
    struct __IOSurfaceAccelerator { } * _msr;
    struct __CFRunLoop { } * _msr_runloop;
    struct __CFRunLoopSource { } * _msr_runloop_source;
}

@property (nonatomic, readonly) struct __IOSurfaceAccelerator { }*msr;

- (void)dealloc;
- (id)initWithRunloop:(struct __CFRunLoop { }*)arg1;
- (struct __IOSurfaceAccelerator { }*)msr;

@end
