
@protocol NCAuxiliaryOptionsSupporting <NCMaterialDisplaying>

@required

- (NSArray *)auxiliaryOptionActions;
- (NSArray *)auxiliaryOptionButtons;
- (NSString *)auxiliaryOptionsSummaryText;
- (bool)auxiliaryOptionsVisible;
- (void)setAuxiliaryOptionActions:(NSArray *)arg1;
- (void)setAuxiliaryOptionsSummaryText:(NSString *)arg1;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;

@optional

- (UIColor *)auxiliaryOptionsTextColor;
- (void)setAuxiliaryOptionsTextColor:(UIColor *)arg1;

@end
