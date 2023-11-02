
@interface VCVirtualAVCaptureConnection : AVCaptureConnection {
    bool  _active;
    AVCaptureOutput * _output;
    NSArray * _ports;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    int  _videoRetainedBufferCountHint;
    bool  _videoRetainedBufferCountHintSupported;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) int videoRetainedBufferCountHint;
@property (getter=isVideoRetainedBufferCountHintSupported, nonatomic) bool videoRetainedBufferCountHintSupported;

- (bool)active;
- (void)dealloc;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (id)inputPorts;
- (void)invalidate;
- (bool)isActive;
- (bool)isVideoRetainedBufferCountHintSupported;
- (id)output;
- (void)setActive:(bool)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (void)setVideoRetainedBufferCountHintSupported:(bool)arg1;
- (int)videoRetainedBufferCountHint;

@end
