
@interface WebCoreAVVideoCaptureSourceObserver : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {
    void * m_callback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addNotificationObservers;
- (void)beginSessionInterrupted:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)deviceConnectedDidChange:(id)arg1;
- (void)disconnect;
- (void)endSessionInterrupted:(id)arg1;
- (id)initWithCallback:(void*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeNotificationObservers;
- (void)sessionRuntimeError:(id)arg1;

@end
