
@interface LTUITranslateSettingsDownloadController : PSViewController {
    UIViewController * _bridge;
    unsigned long long  _usageContext;
}

@property (nonatomic) unsigned long long usageContext;

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)setUsageContext:(unsigned long long)arg1;
- (unsigned long long)usageContext;
- (void)viewDidLoad;

@end
