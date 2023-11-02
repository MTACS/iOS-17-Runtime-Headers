
@interface AVStreamDataAssetInspector : AVAssetInspector {
    NSArray * _trackIDs;
}

- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithTrackIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackIDs;

@end
