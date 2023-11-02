
@interface MPAVController : NSObject {
    MPAVItem * _currentItem;
    double  _currentTime;
    bool  _playing;
    float  _rate;
    bool  _shouldDisplayAsPlaying;
    long long  _state;
}

@property (nonatomic, retain) MPAVItem *currentItem;
@property (nonatomic) double currentTime;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) float rate;
@property (nonatomic) bool shouldDisplayAsPlaying;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(id /* block */)arg2;
- (id)currentItem;
- (double)currentTime;
- (bool)isPlaying;
- (void)pause;
- (void)play;
- (float)rate;
- (void)removeTimeObserver:(id)arg1;
- (void)setCurrentItem:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setShouldDisplayAsPlaying:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldDisplayAsPlaying;
- (long long)state;

@end
