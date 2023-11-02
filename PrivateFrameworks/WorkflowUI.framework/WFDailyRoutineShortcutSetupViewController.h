
@interface WFDailyRoutineShortcutSetupViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate, WFDailyRoutineShortcutSetupTriggerViewControllerDelegate, WFLocationPickerViewControllerDelegate> {
    NSMutableDictionary * _actionsPerQuestionIndex;
    <WFDailyRoutineShortcutSetupViewControllerDelegate> * _delegate;
    WFDailyRoutineShortcutSetupFlow * _flow;
    unsigned long long  _metricsSource;
    CLCircularRegion * _selectedRegion;
    UINavigationController * _setupNavigationController;
    NSMutableArray * _setupStepEvents;
}

@property (nonatomic, retain) NSMutableDictionary *actionsPerQuestionIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDailyRoutineShortcutSetupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long metricsSource;
@property (nonatomic, retain) CLCircularRegion *selectedRegion;
@property (nonatomic, retain) UINavigationController *setupNavigationController;
@property (nonatomic, retain) NSMutableArray *setupStepEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionsPerQuestionIndex;
- (void)configureBackButtonOnViewController:(id)arg1;
- (long long)currentQuestionIndex;
- (id)currentStepEvent;
- (void)dailyRoutineShortcutSetupQuestionViewController:(id)arg1 didAddActions:(id)arg2;
- (void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(id)arg1;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidAddTrigger:(id)arg1;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidSkip:(id)arg1;
- (id)delegate;
- (void)didSelectCancel;
- (void)finishWithTrigger:(id)arg1;
- (id)flow;
- (id)initWithFlow:(id)arg1 metricsSource:(unsigned long long)arg2;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)locationPickerDidCancel:(id)arg1;
- (unsigned long long)metricsSource;
- (void)pushStepForQuestion:(id)arg1;
- (void)pushToNextStep;
- (void)pushTriggerSetupStep;
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(id)arg1;
- (id)selectedRegion;
- (void)setActionsPerQuestionIndex:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedRegion:(id)arg1;
- (void)setSetupNavigationController:(id)arg1;
- (void)setSetupStepEvents:(id)arg1;
- (id)setupNavigationController;
- (id)setupStepEvents;
- (void)submitMetrics:(bool)arg1;
- (void)viewDidLoad;

@end
