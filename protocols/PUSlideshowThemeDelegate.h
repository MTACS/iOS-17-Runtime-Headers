
@protocol PUSlideshowThemeDelegate <NSObject>

@optional

- (void)themePicker:(PUSlideshowThemeViewController *)arg1 didPickPreset:(OKProducerPreset *)arg2;
- (void)themePickerDidFinish:(PUSlideshowThemeViewController *)arg1;

@end
