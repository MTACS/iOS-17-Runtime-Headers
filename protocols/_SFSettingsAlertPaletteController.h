
@protocol _SFSettingsAlertPaletteController

@required

- (UIView *)customPaletteView;
- (UIImage *)imageForValue:(id)arg1;
- (bool)isSelectedValue:(id)arg1;
- (void)selectValue:(id)arg1;
- (id)selectedValue;
- (NSArray *)values;

@end
