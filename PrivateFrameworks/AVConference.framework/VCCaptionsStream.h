
@interface VCCaptionsStream : VCVideoStream <VCCaptionsReceiverDelegate, VCCaptionsSource> {
    <VCCaptionsSourceDelegate> * _captionsDelegate;
    VCCaptionsReceiver * _captionsReceiver;
    bool  _enabled;
}

@property (nonatomic, readonly) bool captionsEnabled;
@property (nonatomic, readonly) bool captionsSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)captionsDelegate;
- (bool)captionsEnabled;
- (bool)captionsSupported;
- (void)dealloc;
- (void)didReceiveCaptions:(id)arg1;
- (void)enableCaptions:(bool)arg1;
- (id)init;
- (id)initWithTransportSessionID:(unsigned int)arg1 idsParticipantID:(unsigned long long)arg2 ssrc:(unsigned int)arg3 streamToken:(long long)arg4;
- (void)onStartWithCompletionHandler:(id /* block */)arg1;
- (void)onStopWithCompletionHandler:(id /* block */)arg1;
- (void)registerCaptionsEventDelegate:(id)arg1;
- (void)setCaptionsLocale:(id)arg1;
- (struct tagVCVideoReceiverDelegateRealtimeInstanceVTable { int (*x1)(); int (*x2)(); })videoReceiverDelegateFunctions;

@end
