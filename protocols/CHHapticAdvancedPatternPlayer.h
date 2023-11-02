
@protocol CHHapticAdvancedPatternPlayer <CHHapticPatternPlayer>

@required

- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (bool)isMuted;
- (bool)loopEnabled;
- (double)loopEnd;
- (bool)pauseAtTime:(double)arg1 error:(id*)arg2;
- (float)playbackRate;
- (bool)resumeAtTime:(double)arg1 error:(id*)arg2;
- (bool)seekToOffset:(double)arg1 error:(id*)arg2;
- (void)setCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setIsMuted:(bool)arg1;
- (void)setLoopEnabled:(bool)arg1;
- (void)setLoopEnd:(double)arg1;
- (void)setPlaybackRate:(float)arg1;

@end
