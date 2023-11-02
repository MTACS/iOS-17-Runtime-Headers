
@interface WFSilenceUnknownCallersSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
