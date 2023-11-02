
@protocol SFAccountTableViewCell <NSObject>

@required

- (WBSSavedAccount *)savedAccount;
- (void)setIcon:(UIImage *)arg1;
- (void)showPlaceholderImageForDomain:(NSString *)arg1 backgroundColor:(UIColor *)arg2;

@end
