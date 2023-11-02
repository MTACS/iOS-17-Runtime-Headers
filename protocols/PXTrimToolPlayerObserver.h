
@protocol PXTrimToolPlayerObserver <NSObject>

@required

- (void)compositionDidUpdateForPlayerWrapper:(id <PXTrimToolPlayerWrapper>)arg1;

@optional

- (void)playerStatusChangedForPlayerWrapper:(id <PXTrimToolPlayerWrapper>)arg1;
- (void)playerWrapper:(id <PXTrimToolPlayerWrapper>)arg1 timeChanged:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
