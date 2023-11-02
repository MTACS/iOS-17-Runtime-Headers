
@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton {
    long long  _timerDuration;
}

@property (nonatomic) long long timerDuration;

- (long long)controlType;
- (void)didSelectMenuItem:(id)arg1;
- (id)imageNameForCurrentState;
- (bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (void)setTimerDuration:(long long)arg1;
- (bool)shouldUseActiveTintForCurrentState;
- (long long)timerDuration;

@end
