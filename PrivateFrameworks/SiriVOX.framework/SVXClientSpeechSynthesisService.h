
@interface SVXClientSpeechSynthesisService : NSObject <SVXClientServiceConsuming, SVXClientSpeechSynthesisServicing> {
    NSMutableDictionary * _audioChunkHandlersByUUID;
    <SVXClientServiceProviding> * _clientServiceProvider;
    <SVXPerforming> * _performer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAudioChunkHandler:(id /* block */)arg1 forUUID:(id)arg2;
- (bool)_handleSynthesizedBufferForHandlerUUID:(id)arg1 audioChunkData:(id)arg2 audioChunkIndex:(unsigned long long)arg3;
- (void)_removeAudioChunkHandlerForUUID:(id)arg1;
- (void)cancelPendingRequest:(id)arg1;
- (void)clientServiceDidChange:(bool)arg1;
- (void)enqueueRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSynthesizedBufferForHandlerUUID:(id)arg1 audioChunkData:(id)arg2 audioChunkIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;
- (void)prewarmRequest:(id)arg1;
- (void)stopRequest:(id)arg1;
- (void)synthesizeRequest:(id)arg1 audioChunkHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)synthesizeRequest:(id)arg1 completion:(id /* block */)arg2;

@end
