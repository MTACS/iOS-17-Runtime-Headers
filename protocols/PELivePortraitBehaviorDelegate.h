
@protocol PELivePortraitBehaviorDelegate <NSObject>

@required

- (bool)isLivePhotoVideoEnabled;
- (void)setLivePhotoVideoEnabled:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedStillImageTime;

@end
