
@protocol AAUITrustedContactDetailsActionHandler <NSObject>

@required

- (void)doDestructiveAction:(AAUITrustedContactDetailsViewController *)arg1 specifier:(PSSpecifier *)arg2;

@optional

- (void)doPrimaryAction:(AAUITrustedContactDetailsViewController *)arg1 specifier:(PSSpecifier *)arg2;
- (void)doSecondaryAction:(AAUITrustedContactDetailsViewController *)arg1 specifier:(PSSpecifier *)arg2;

@end
