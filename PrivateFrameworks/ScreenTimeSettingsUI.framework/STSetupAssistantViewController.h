
@interface STSetupAssistantViewController : OBWelcomeController {
    <STSetupAssistantViewControllerDelegate> * _delegate;
    bool  _hasRestrictionsPasscode;
    long long  _state;
}

@property <STSetupAssistantViewControllerDelegate> *delegate;
@property (readonly) bool hasRestrictionsPasscode;
@property (readonly) long long state;

+ (id)new;

- (void).cxx_destruct;
- (void)_continue:(id)arg1;
- (void)_setUpLater:(id)arg1;
- (id)delegate;
- (bool)hasRestrictionsPasscode;
- (id)init;
- (id)initWithScreenTimeState:(long long)arg1 passcode:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (void)viewDidLoad;

@end
