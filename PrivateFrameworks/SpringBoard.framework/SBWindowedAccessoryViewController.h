
@interface SBWindowedAccessoryViewController : UIViewController <SBWindowedAccessoryViewDelegate> {
    <SBWindowedAccessoryViewControllerDelegate> * _delegate;
    SBWindowedAccessoryView * _windowedAccessoryView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBWindowedAccessoryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBWindowedAccessoryView *windowedAccessoryView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)forceDetachWindowedAcessoryButtonTapped:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setWindowedAccessoryView:(id)arg1;
- (void)viewDidLoad;
- (id)windowedAccessoryView;

@end
