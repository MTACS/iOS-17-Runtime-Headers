
@protocol _SFSettingsAlertOptionsGroupController <NSObject>

@required

- (NSAttributedString *)attributedStringForValue:(id)arg1;
- (bool)isSelectedValue:(id)arg1;
- (void)prepareItem:(id <_SFSettingsAlertOptionsGroupItemConfiguration>)arg1 forValue:(id)arg2;
- (void)setSelectedValue:(id)arg1;
- (NSString *)textStyleForValue:(id)arg1;
- (NSArray *)values;

@end
