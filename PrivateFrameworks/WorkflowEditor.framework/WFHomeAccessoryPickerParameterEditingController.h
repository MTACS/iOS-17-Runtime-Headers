
@interface WFHomeAccessoryPickerParameterEditingController : WFUIKitParameterEditingController <HUTriggerActionBuilderEditorDelegate, HUTriggerEditorDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)actionBuilderEditor:(id)arg1 didFinishWithTriggerActionSetBuilder:(id)arg2;
- (void)createViewControllerWithInitialState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishWithActionSets:(id)arg1 home:(id)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;

@end
