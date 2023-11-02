
@protocol MediaControlsMasterVolumeSliderDelegate <NSObject>

@optional

- (bool)shouldEnableSyncingForSlider:(MediaControlsMasterVolumeSlider *)arg1;
- (bool)slider:(MediaControlsMasterVolumeSlider *)arg1 shouldCancelSnapWithTouch:(UITouch *)arg2;
- (bool)slider:(MediaControlsMasterVolumeSlider *)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3;

@end
