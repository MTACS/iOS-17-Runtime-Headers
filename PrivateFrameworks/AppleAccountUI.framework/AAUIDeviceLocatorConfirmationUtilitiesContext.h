
@interface AAUIDeviceLocatorConfirmationUtilitiesContext : NSObject {
    ACAccount * _account;
    NSString * _buttonTitle;
    NSDictionary * _customRequestHeaders;
    NSString * _message;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *buttonTitle;
@property (nonatomic, retain) NSDictionary *customRequestHeaders;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)account;
- (id)buttonTitle;
- (id)customRequestHeaders;
- (id)message;
- (id)presentingViewController;
- (void)setAccount:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setCustomRequestHeaders:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
