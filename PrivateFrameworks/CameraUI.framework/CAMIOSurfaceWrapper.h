
@interface CAMIOSurfaceWrapper : NSObject {
    void * _surface;
}

@property (nonatomic, readonly) void*surface;

- (void)dealloc;
- (id)initWithIOSurface:(void*)arg1;
- (void*)surface;

@end
