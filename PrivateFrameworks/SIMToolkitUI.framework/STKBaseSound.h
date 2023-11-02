
@interface STKBaseSound : NSObject <STKSound> {
    double  _duration;
    bool  _isPlaying;
    bool  _playsOnce;
    BSTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) bool playsOnce;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reallyPlaySound;
- (void)_reallyStopSound;
- (void)_sync_playSound;
- (void)_sync_stopSound;
- (void)dealloc;
- (double)duration;
- (id)initWithDuration:(double)arg1;
- (bool)isPlaying;
- (void)playSound;
- (bool)playsOnce;
- (void)stopSound;

@end
