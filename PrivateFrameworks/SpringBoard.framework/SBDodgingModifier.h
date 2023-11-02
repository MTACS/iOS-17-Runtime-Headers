
@interface SBDodgingModifier : SBChainableModifier <SBDodgingContextProviding, SBDodgingQueryProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextProtocol;
+ (id)newEventResponse;
+ (id)queryProtocol;

- (id)_handleEvent:(id)arg1;
- (id)handleAnimationCompletionEvent:(id)arg1;
- (id)handleCustomEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handlePreferenceChangeEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleRotationEvent:(id)arg1;
- (id)loggingCategory;
- (bool)runsInternalVerificationAfterEventDispatch;

@end
