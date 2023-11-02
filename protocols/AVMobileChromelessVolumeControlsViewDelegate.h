
@protocol AVMobileChromelessVolumeControlsViewDelegate <NSObject>

@optional

- (void)volumeControlsView:(AVMobileChromelessVolumeControlsView *)arg1 volumeDidChangeTo:(double)arg2;
- (void)volumeControlsView:(AVMobileChromelessVolumeControlsView *)arg1 volumeDidChangeTo:(double)arg2 withUpdateSource:(unsigned long long)arg3;
- (void)volumeControlsViewButtonWasTapped:(AVMobileChromelessVolumeControlsView *)arg1;
- (void)volumeControlsViewInteractionDidBegin:(AVMobileChromelessVolumeControlsView *)arg1;
- (void)volumeControlsViewInteractionDidEnd:(AVMobileChromelessVolumeControlsView *)arg1;

@end
