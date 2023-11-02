
@interface HPSUIBetaEnrollmentViewController : UIViewController <HomePlatformSettingsUI.BetaEnrollmentClientInterface> {
    NSString * _homeID;
    _HPSUIBetaEnrollmentViewController * _internalVC;
}

@property (nonatomic, retain) NSString *homeID;
@property (nonatomic, retain) _HPSUIBetaEnrollmentViewController *internalVC;

+ (void)shouldShowBetaEnrollmentButtonForHomeID:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)configureInternalVC;
- (void)encodeWithCoder:(id)arg1;
- (id)homeID;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeID:(id)arg1;
- (id)internalVC;
- (void)setBackgroundColorIfNeeded;
- (void)setHomeID:(id)arg1;
- (void)setInternalVC:(id)arg1;
- (void)viewDidLoad;

@end
