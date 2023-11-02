
@interface MapsSuggestionsMapsInstalledTriggeringToggle : MapsSuggestionsTriggeringToggle <LSApplicationWorkspaceObserverProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (bool)isTrue;

@end
