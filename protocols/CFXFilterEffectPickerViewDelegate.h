
@protocol CFXFilterEffectPickerViewDelegate <CFXEffectPickerViewDelegate>

@required

- (bool)shouldDisplayExpandedModeForFilterPickerView:(CFXFilterEffectPickerView *)arg1;
- (bool)shouldRotateCellsForDeviceOrientation;

@end
