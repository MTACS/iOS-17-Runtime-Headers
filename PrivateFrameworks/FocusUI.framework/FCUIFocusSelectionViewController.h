
@interface FCUIFocusSelectionViewController : UIViewController <FCActivityManagerObserving, UIScrollViewDelegate> {
    FCUIActivityListView * _activityListView;
    FCActivityManager * _activityManager;
    MTMaterialView * _backgroundMaterialView;
    <FCUIFocusSelectionViewControllerDelegate> * _delegate;
    NSString * _selectedActivityIdentifier;
    FCUIActivityControl * _selectedControl;
    NSString * _subtitle;
}

@property (getter=_activityManager, setter=_setActivityManager:, nonatomic, retain) FCActivityManager *activityManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCUIFocusSelectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *selectedActivityIdentifier;
@property (nonatomic, retain) FCUIActivityControl *selectedControl;
@property (readonly) Class superclass;

+ (id)selectionControllerWithSelectedActivityIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3;

- (void).cxx_destruct;
- (id)_activityControlForActivity:(id)arg1;
- (id)_activityManager;
- (void)_closeButtonTapped:(id)arg1;
- (void)_configureActivityListView;
- (void)_setActivityManager:(id)arg1;
- (void)_setSelectedControl:(id)arg1;
- (id)delegate;
- (id)initWithSelectedActivityIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedActivityIdentifier;
- (id)selectedControl;
- (void)setDelegate:(id)arg1;
- (void)setSelectedActivityIdentifier:(id)arg1;
- (void)setSelectedControl:(id)arg1;
- (void)viewDidLoad;

@end
