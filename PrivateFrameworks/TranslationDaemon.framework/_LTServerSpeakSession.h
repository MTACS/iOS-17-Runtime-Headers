
@interface _LTServerSpeakSession : NSObject {
    <_LTTranslationEngine> * _engine;
    _LTPlaybackService * _player;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_createTemporaryOutputFileWithURL:(id)arg1;
- (void)_playback:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3 audioStartHandler:(id /* block */)arg4;
- (void)cancel;
- (id)initWithEngine:(id)arg1;
- (void)speak:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3 audioStartHandler:(id /* block */)arg4;

@end
