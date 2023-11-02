
@protocol NCAuxiliaryOptionsProviding <NSObject>

@optional

- (NSArray *)auxiliaryOptionActions;
- (NSString *)auxiliaryOptionsSummaryText;
- (UIColor *)auxiliaryOptionsTextColor;
- (bool)auxiliaryOptionsVisible;
- (void)setAuxiliaryOptionsVisible:(bool)arg1;

@end
