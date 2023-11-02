
@interface MSDSupportViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    OBWelcomeController * _contentViewController;
    NSString * _countryCode;
    UITableView * _optionsTableView;
}

@property (nonatomic, retain) OBWelcomeController *contentViewController;
@property (nonatomic, retain) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITableView *optionsTableView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentCountryStackView;
- (id)contentViewController;
- (id)countryCode;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)optionsTableView;
- (void)setContentViewController:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setOptionsTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
