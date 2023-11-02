
@protocol CFXEffectPickerViewDelegate <NSObject>

@required

- (void)effectPickerView:(CFXEffectPickerView *)arg1 didPickEffectAtIndex:(long long)arg2;
- (void)effectPickerViewDidScroll:(CFXEffectPickerView *)arg1;

@end
