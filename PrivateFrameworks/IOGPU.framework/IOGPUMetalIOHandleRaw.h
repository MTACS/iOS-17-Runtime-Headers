
@interface IOGPUMetalIOHandleRaw : _MTLIOHandleRaw {
    IOGPUMetalDevice<MTLDevice> * _dev;
    unsigned long long  _globalTraceObjectID;
    unsigned int  _vnioID;
}

@property (readonly) unsigned int vnioID;

- (void)dealloc;
- (unsigned long long)globalTraceObjectID;
- (id)initWithDevice:(id)arg1 path:(const char *)arg2 error:(id*)arg3 uncached:(bool)arg4;
- (void)setLabel:(id)arg1;
- (unsigned int)vnioID;

@end
