
@interface VCVirtualAVCaptureVideoDataOutput : AVCaptureVideoDataOutput {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _connections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    VCWeakObjectHolder * _weakPushDelegate;
}

- (void)addConnection:(id)arg1;
- (id)connectionWithMediaType:(id)arg1;
- (id)connections;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)removeConnection:(id)arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;

@end
