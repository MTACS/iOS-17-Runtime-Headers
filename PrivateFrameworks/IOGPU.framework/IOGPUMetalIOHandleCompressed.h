
@interface IOGPUMetalIOHandleCompressed : _MTLIOHandleCompressed {
    IOGPUMetalDevice<MTLDevice> * _dev;
    unsigned long long  _globalTraceObjectID;
    unsigned int  _vnioID;
}

@property (readonly) unsigned int vnioID;

- (void)dealloc;
- (unsigned long long)globalTraceObjectID;
- (id)initWithDevice:(id)arg1 path:(const char *)arg2 compressionType:(long long)arg3 error:(id*)arg4 uncached:(bool)arg5;
- (void)setLabel:(id)arg1;
- (unsigned int)vnioID;

@end
