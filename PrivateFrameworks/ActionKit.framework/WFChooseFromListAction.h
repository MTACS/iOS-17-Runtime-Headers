
@interface WFChooseFromListAction : WFHandleCustomIntentAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;
+ (id)userInterfaceProtocol;

- (id)appResource;
- (id)contentDestinationWithError:(id*)arg1;
- (id)contentItemsFromSelectedItem:(id)arg1;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)itemsFromDictionaryItem:(id)arg1;
- (bool)populatesInputFromInputParameter;
- (void)presentAlertWithUserInterface:(id)arg1 prompt:(id)arg2 input:(id)arg3;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (id)roundedImageFromWFImage:(id)arg1 roundingStyle:(unsigned long long)arg2 desiredSize:(struct CGSize { double x1; double x2; })arg3 desiredScale:(double)arg4;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;

@end
