
@protocol CNContactQuickActionViewContainer <NSObject>

@required

- (UITraitCollection *)traitCollection;
- (UIView<CNContactQuickActionPresentation> *)viewForActionType:(NSString *)arg1;

@end
