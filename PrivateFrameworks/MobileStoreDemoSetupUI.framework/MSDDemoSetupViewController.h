
@interface MSDDemoSetupViewController : OBWelcomeController <OBSetupAssistantSupport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_continueTapped:(id)arg1;
- (void)_showEraseConfirmation;
- (void)_skipTapped:(id)arg1;
- (id)init;

@end
