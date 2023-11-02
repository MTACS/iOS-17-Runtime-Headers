
@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SearchUIFirstTimeExperienceDelegate> {
    <UniversalSearchFirstTimeExperienceViewControllerDelegate> * _delegate;
    SearchUIFirstTimeExperienceViewController * _firstTimeExperienceViewController;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UniversalSearchFirstTimeExperienceViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)hasShownParsecFirstTimeUserExperience;
+ (void)userDidInteractWithParsecFirstTimeUserExperience;

- (void).cxx_destruct;
- (id)delegate;
- (void)firstTimeExperienceContinueButtonPressed;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)unifiedFieldDidChange;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
