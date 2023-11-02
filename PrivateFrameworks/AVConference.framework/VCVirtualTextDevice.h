
@interface VCVirtualTextDevice : NSObject <VCMediaStreamProtocol, VCTextReceiverDelegate, VCTextSender> {
    int  _clientPid;
    id  _mediaStreamDelegate;
    struct tagVCMediaStreamDelegateRealtimeInstanceVTable { 
        int (*updateFrequencyLevel)(); 
    }  _mediaStreamDelegateFunctions;
    NSObject<OS_dispatch_queue> * _mediaStreamDelegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    id  _sendDelegate;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
@property (nonatomic) struct tagVCMediaStreamDelegateRealtimeInstanceVTable { int (*x1)(); } mediaStreamDelegateFunctions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didReceiveText:(id)arg1;
- (id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateFunctions:(const struct tagVCMediaStreamDelegateRealtimeInstanceVTable { int (*x1)(); }*)arg4 delegateQueue:(id)arg5;
- (id)mediaStreamDelegate;
- (struct tagVCMediaStreamDelegateRealtimeInstanceVTable { int (*x1)(); })mediaStreamDelegateFunctions;
- (id)mediaStreamDelegateQueue;
- (id)pause;
- (id)resume;
- (void)sendCharacter:(unsigned short)arg1;
- (id)sendDelegate;
- (void)sendText:(id)arg1;
- (void)setMediaStreamDelegate:(id)arg1;
- (void)setMediaStreamDelegateFunctions:(struct tagVCMediaStreamDelegateRealtimeInstanceVTable { int (*x1)(); })arg1;
- (void)setMediaStreamDelegateQueue:(id)arg1;
- (id)setPause:(bool)arg1;
- (bool)setStreamConfig:(id)arg1 withError:(id*)arg2;
- (id)start;
- (id)stop;

@end
