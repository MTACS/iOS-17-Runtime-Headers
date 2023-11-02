
@interface HPSUICarrySettingsViewController : UIViewController <HomePlatformSettingsUI.CarrySettingsClientInterface> {
    NSString * _homeID;
    _HPSUICarrySettingsViewController * _internalVC;
}

@property (nonatomic, retain) NSString *homeID;
@property (nonatomic, retain) _HPSUICarrySettingsViewController *internalVC;

+ (void)shouldShowCarrySettingsButtonForHomeID:(id)arg1 withCompletion:(id /* block */)arg2;

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
