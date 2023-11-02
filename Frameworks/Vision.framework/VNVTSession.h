
@interface VNVTSession : NSObject {
    unsigned int  _inputPixelFormat;
    unsigned int  _outputPixelFormat;
    void * _session;
}

- (void)dealloc;
- (id)initWithSession:(void*)arg1;

@end
