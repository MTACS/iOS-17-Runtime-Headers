
@protocol FAFamilySetupPage <NSObject>

@required

- (<FAFamilySetupPageDelegate> *)delegate;
- (id)initWithAccount:(ACAccount *)arg1 store:(ACAccountStore *)arg2;
- (void)setDelegate:(id <FAFamilySetupPageDelegate>)arg1;

@end
