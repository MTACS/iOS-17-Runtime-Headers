
@interface CSAudioTandemStream : CSAudioStream <CSAudioStreamProvidingDelegate> {
    CSAudioStream * _primaryStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CSAudioStream *primaryStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attachToPrimaryStreamWithCompletion:(id /* block */)arg1;
- (id)initWithMasterAudioStream:(id)arg1 name:(id)arg2;
- (bool)isStreaming;
- (bool)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id*)arg2;
- (void)prepareAudioStreamWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)primaryStream;
- (void)setPrimaryStream:(id)arg1;
- (void)startAudioStreamWithOption:(id)arg1 completion:(id /* block */)arg2;
- (void)stopAudioStreamWithOption:(id)arg1 completion:(id /* block */)arg2;

@end
