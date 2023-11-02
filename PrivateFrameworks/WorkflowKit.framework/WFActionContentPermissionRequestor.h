
@interface WFActionContentPermissionRequestor : NSObject <WFContentPermissionRequestor> {
    WFAction * _action;
    WFContactStore * _contactStore;
    <WFUserInterfaceHost> * _userInterface;
}

@property (nonatomic, readonly) WFAction *action;
@property (nonatomic, retain) WFContactStore *contactStore;
@property (nonatomic, retain) <WFUserInterfaceHost> *userInterface;

- (void).cxx_destruct;
- (void)_allowNetworkAccessAfterPromptingForURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)action;
- (void)allowContactsAccessWithCompletionHandler:(id /* block */)arg1;
- (void)allowNetworkAccessAfterPromptingForURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id /* block */)arg1;
- (id)contactStore;
- (id)initWithAction:(id)arg1;
- (void)requestUserConsentToLoadWebContentAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setContactStore:(id)arg1;
- (void)setUserInterface:(id)arg1;
- (id)userInterface;

@end
