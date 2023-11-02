
@protocol AVVolumeControlsControllerDelegate

@required

- (UIView *)volumeControlsController:(AVVolumeControlsContentView *)arg1 volumeButtonControl:(AVVolumeButtonControl *)arg2 viewContainingVolumeSlider:(AVVolumeSlider *)arg3;

@optional

- (void)volumeControlsController:(AVVolumeControlsContentView *)arg1 volumeButtonControl:(AVVolumeButtonControl *)arg2 didHideVolumeSlider:(AVVolumeSlider *)arg3;
- (void)volumeControlsController:(AVVolumeControlsContentView *)arg1 volumeButtonControl:(AVVolumeButtonControl *)arg2 didShowVolumeSlider:(AVVolumeSlider *)arg3;
- (float)volumeControlsControllerPlayerViewHeight:(AVVolumeControlsContentView *)arg1;

@end
