
@interface _HPSUICarrySettingsViewController : HomePlatformSettingsUI.BaseExtensionViewController <HomePlatformSettingsUI.CarrySettingsClientInterface> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  homeID;
}

+ (void)shouldShowCarrySettingsButtonForHomeID:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHomeID:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
