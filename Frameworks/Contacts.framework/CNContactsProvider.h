
@interface CNContactsProvider : NSObject {
    CNContactsProviderSession * _currentSession;
    bool  _isAlmond;
    CNUnfairLock * _lock;
    CNContactStore * _providerStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, retain) CNContactsProviderSession *currentSession;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic) bool isAlmond;
@property (readonly) CNUnfairLock *lock;
@property (nonatomic, retain) CNContactStore *providerStore;

- (void).cxx_destruct;
- (id)contactStore;
- (id)containerIdentifier;
- (id)currentSession;
- (void)disableExtensionWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disableWithCompletionHandler:(id /* block */)arg1;
- (void)enableExtensionWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enableWithCompletionHandler:(id /* block */)arg1;
- (void)endSession;
- (long long)fetchExtensionCountWithError:(id*)arg1;
- (id)fetchExtensionItemsWithError:(id*)arg1;
- (id)init;
- (bool)isAlmond;
- (bool)isEnabled;
- (bool)isSessionRunning;
- (id)lock;
- (id)providerStore;
- (void)requestExtensionCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCurrentSession:(id)arg1;
- (void)setIsAlmond:(bool)arg1;
- (void)setProviderStore:(id)arg1;
- (void)startSession:(id)arg1;
- (void)synchronizeUsingSession:(id)arg1 completionHandler:(id /* block */)arg2;

@end
