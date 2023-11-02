
@interface WFDefaultContentPermissionRequestor : NSObject <WFContentPermissionRequestor> {
    WFContactStore * _contactStore;
}

@property (nonatomic, retain) WFContactStore *contactStore;

- (void).cxx_destruct;
- (void)allowContactsAccessWithCompletionHandler:(id /* block */)arg1;
- (void)allowNetworkAccessAfterPromptingForURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id /* block */)arg1;
- (id)contactStore;
- (void)requestUserConsentToLoadWebContentAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setContactStore:(id)arg1;

@end
