
@protocol AXUISettingsEditableTableCellWithStepperDelegate <NSObject>

@required

- (double)maximumValueForSpecifier:(PSSpecifier *)arg1;
- (double)minimumValueForSpecifier:(PSSpecifier *)arg1;
- (void)specifier:(PSSpecifier *)arg1 setValue:(double)arg2;
- (double)stepValueForSpecifier:(PSSpecifier *)arg1;
- (NSString *)stringValueForSpecifier:(PSSpecifier *)arg1;
- (double)valueForSpecifier:(PSSpecifier *)arg1;

@optional

- (long long)keyboardTypeForSpecifier:(PSSpecifier *)arg1;
- (NSString *)unitsStringForSpecifier:(PSSpecifier *)arg1;

@end
