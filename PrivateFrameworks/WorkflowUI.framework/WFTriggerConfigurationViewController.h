
@interface WFTriggerConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerConfigurationClass> {
    <WFTriggerConfigurationViewControllerDelegate> * _delegate;
    unsigned long long  _mode;
    bool  _runImmediately;
    bool  _shouldNotify;
    UITableView * _tableView;
    WFTrigger * _trigger;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTriggerConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic) bool runImmediately;
@property (nonatomic) bool shouldNotify;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, retain) WFTrigger *trigger;

+ (Class)viewControllerClassForTriggerClass:(Class)arg1;

- (void).cxx_destruct;
- (id)configureAdditionalCellsIfNeeded:(id)arg1 indexPath:(id)arg2 sectionInfo:(id)arg3;
- (id)customSections;
- (id)delegate;
- (void)didSelectRowAtIndexPath:(id)arg1 withSectionInfo:(id)arg2;
- (void)dismiss:(id)arg1;
- (void)finish;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (bool)isModalInPresentation;
- (void)loadView;
- (unsigned long long)mode;
- (void)notifySwitchChanged:(id)arg1;
- (long long)numberOfRowsInSectionWithInfo:(id)arg1;
- (bool)runImmediately;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setRunImmediately:(bool)arg1;
- (void)setShouldNotify:(bool)arg1;
- (void)setTrigger:(id)arg1;
- (bool)shouldNotify;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (id)tableViewHeaderString;
- (id)trigger;
- (void)updateNextButtonEnabledState;
- (void)viewDidLoad;

@end
