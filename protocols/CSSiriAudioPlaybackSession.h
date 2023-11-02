
@protocol CSSiriAudioPlaybackSession <NSObject>

@required

- (void)handleBeginInterruption;
- (void)handleEndInterruption:(bool)arg1;
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1 request:(AFAudioPlaybackRequest *)arg2 options:(unsigned long long)arg3;
- (unsigned long long)options;
- (void)prepareWithOptions:(void *)arg1 audioSession:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, AVAudioSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (AFAudioPlaybackRequest *)request;
- (void)startWithOptions:(void *)arg1 audioSession:(void *)arg2 preparationHandler:(void *)arg3 executionHandler:(void *)arg4 finalizationHandler:(void *)arg5; // needs 5 arg types, found 18: unsigned long long, AVAudioSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)stop:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
