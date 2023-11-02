
@interface CDPRemoteUILocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {
    bool  _finished;
    bool  _inlineMode;
    NSString * _titleText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startAnimating;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)init;
- (id)pinInstructionsPrompt;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)title;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
