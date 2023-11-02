
@interface CACContextCluesViewController : UIViewController <CACContextCluesWelcomeControllerDelegate, CACViewController, UIAdaptivePresentationControllerDelegate, UIPresentationControllerDelegatePrivate, UISheetPresentationControllerDelegate> {
    NSArray * _commands;
    CACContextCluesWelcomeController * _contextCluesController;
    <CACContextCluesDelegate> * _delegate;
    UINavigationController * _presentingNavigationController;
}

@property (nonatomic, retain) NSArray *commands;
@property (nonatomic, retain) CACContextCluesWelcomeController *contextCluesController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CACContextCluesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, retain) UINavigationController *presentingNavigationController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long zOrder;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)commands;
- (id)contextCluesController;
- (void)contextCluesDoneButtonPressed:(id)arg1;
- (id)delegate;
- (void)doneButtonPressed;
- (id)initWithCommands:(id)arg1;
- (bool)isOverlay;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentingNavigationController;
- (void)setCommands:(id)arg1;
- (void)setContextCluesController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentingNavigationController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (long long)zOrder;

@end
