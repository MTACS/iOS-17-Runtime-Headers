
@interface WFTrelloAccessResourceUserInterface : WFActionUserInterface <ASWebAuthenticationPresentationContextProviding, WFTrelloAccessResourceUserInterfaceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)authorizationURLWithCallbackURL:(id)arg1;
- (void)authorizeWithCompletionHandler:(id /* block */)arg1;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;

@end
