
@interface IOSurfaceWiringAssertion : NSObject {
    unsigned int  _mach_port;
}

- (void)dealloc;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithIOSurfaceClient:(struct __IOSurfaceClient { }*)arg1;

@end
