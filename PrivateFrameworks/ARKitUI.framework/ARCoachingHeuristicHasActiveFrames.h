
@interface ARCoachingHeuristicHasActiveFrames : ARCoachingHeuristic {
    int  _frameCount;
    double  _lastFrameTimestamp;
}

- (void)updateWithFrame:(id)arg1 cache:(id)arg2;

@end
