
@protocol LPAudioPlayer

@required

- (void)addClient:(id <LPAudioPlayerClient>)arg1;
- (void)pause;
- (void)play;
- (float)progress;
- (void)removeClient:(id <LPAudioPlayerClient>)arg1;
- (void)reset;
- (unsigned long long)state;

@end
