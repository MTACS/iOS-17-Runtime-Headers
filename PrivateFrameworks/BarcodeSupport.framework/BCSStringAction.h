
@interface BCSStringAction : BCSAction

- (id)actionIcon;
- (id)actionPickerItems;
- (id)contentPreviewString;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (id)localizedDefaultActionDescription;
- (void)performAction;
- (void)performActionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)performDefaultAction;
- (id)shortDescription;

@end
