
@interface VCVirtualAVCaptureDeviceInput : AVCaptureDeviceInput {
    VCVirtualAVCaptureDevice * _device;
    NSArray * _ports;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

- (void)dealloc;
- (id)device;
- (void)disconnect;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (id)ports;

@end
