
@interface ICCreateDayOneEntryAction : ICSchemeAction

- (void)getImagesFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)inputRequired;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;

@end
