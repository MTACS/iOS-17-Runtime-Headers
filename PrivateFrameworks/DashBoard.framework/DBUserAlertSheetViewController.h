
@interface DBUserAlertSheetViewController : UIViewController {
    URTAlert * _alert;
    DBEnvironmentConfiguration * _environmentConfiguration;
}

@property (nonatomic, readonly) URTAlert *alert;
@property (nonatomic, readonly) DBEnvironmentConfiguration *environmentConfiguration;

- (void).cxx_destruct;
- (id)alert;
- (id)environmentConfiguration;
- (id)initWithAlert:(id)arg1 environmentConfiguration:(id)arg2;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;

@end
