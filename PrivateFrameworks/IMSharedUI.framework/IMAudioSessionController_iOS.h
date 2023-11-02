
@interface IMAudioSessionController_iOS : IMAudioSessionController

- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)configureAudioSessionWithOptions:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)setActive:(bool)arg1;

@end
