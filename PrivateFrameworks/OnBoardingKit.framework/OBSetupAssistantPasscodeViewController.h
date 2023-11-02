
@interface OBSetupAssistantPasscodeViewController : OBWelcomeController <OBSetupAssistantSupport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animateDetailText:(id)arg1 animationType:(unsigned long long)arg2 heightDifference:(id /* block */)arg3;
- (void)loadView;
- (bool)shouldAnimateEntireView;
- (void)viewDidLoad;

@end
