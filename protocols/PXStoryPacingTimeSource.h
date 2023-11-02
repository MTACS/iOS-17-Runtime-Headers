
@protocol PXStoryPacingTimeSource <PXStoryPacingClock>

@required

- (<PXStoryPacingTimeSourceDelegate> *)delegate;
- (bool)isActive;
- (bool)isRealTime;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id <PXStoryPacingTimeSourceDelegate>)arg1;

@end
