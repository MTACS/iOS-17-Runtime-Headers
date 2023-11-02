
@interface VCStreamInputAudio : VCStreamInput <VCStreamInputCaptureSourceDelegate> {
    int (* _sampleBufferDelegateCallback;
    void * _sampleBufferDelegateCallbackContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sampleBufferDelegateCallbackLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription { }*)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;
- (void)registerSampleBufferCallback:(int (*)arg1 context:(void*)arg2;

@end
