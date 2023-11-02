
@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate> {
    NSArray * _alertButtons;
}

@property (nonatomic, readonly) CPAlertTemplate *alert;
@property (nonatomic, retain) NSArray *alertButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_titleFont;
- (void)_viewDidLoad;
- (id)alert;
- (id)alertButtons;
- (void)didSelectButton:(id)arg1;
- (id)initWithAlert:(id)arg1 alertDelegate:(id)arg2 templateEnvironment:(id)arg3;
- (id)preferredFocusEnvironments;
- (void)setAlertButtons:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
