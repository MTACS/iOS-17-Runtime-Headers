
@interface MPCItemBookmarker : NSObject {
    MPCPlaybackEngine * _engine;
    MPCMediaFoundationTranslator * _translator;
}

@property (nonatomic) MPCPlaybackEngine *engine;
@property (nonatomic, retain) MPCMediaFoundationTranslator *translator;

- (void).cxx_destruct;
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 time:(double)arg3;
- (id)engine;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2;
- (void)itemDidBecomeCurrent:(id)arg1 time:(double)arg2;
- (void)itemDidPlayToEnd:(id)arg1 time:(double)arg2;
- (void)itemTransitionWillBeginFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 duration:(double)arg4 timeStamp:(id)arg5;
- (void)playbackDidStartForItem:(id)arg1 time:(double)arg2 rate:(float)arg3;
- (void)playbackDidStopForItem:(id)arg1 time:(double)arg2;
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 time:(double)arg3;
- (void)playbackStateDidChangeFromState:(long long)arg1 toState:(long long)arg2 forItem:(id)arg3 time:(double)arg4 rate:(float)arg5;
- (void)setEngine:(id)arg1;
- (void)setTranslator:(id)arg1;
- (id)translator;
- (void)updateDurationSnapshotWithTime:(double)arg1 forItem:(id)arg2 rate:(float)arg3;

@end
