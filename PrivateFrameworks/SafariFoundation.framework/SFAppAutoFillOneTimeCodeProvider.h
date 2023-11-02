
@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
    WBSAutoFillAssociatedDomainsManager * _associatedDomainsManager;
    SFAutoFillOneTimeCode * _currentReceivedOneTimeCode;
    <SFAppAutoFillOneTimeCodeProviderDelegate> * _delegate;
    NSMapTable * _generatorObservers;
    NSTimer * _generatorTimer;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isOneTimeCodeAutoDeletionEnabled;
    EMOneTimeCodeAccelerator * _mailOneTimeCodeAccelerator;
    IMOneTimeCodeAccelerator * _messagesOneTimeCodeAccelerator;
    NSHashTable * _observers;
}

@property (nonatomic, retain) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (nonatomic) <SFAppAutoFillOneTimeCodeProviderDelegate> *delegate;
@property (nonatomic) bool isOneTimeCodeAutoDeletionEnabled;

- (void).cxx_destruct;
- (bool)_appWithAppIdentifierIsWebBrowser:(id)arg1;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)arg1;
- (void)_fetchOneTimeCodeAutoDeletionPreference;
- (void)_notifyOneTimeCodeObserver;
- (void)_processOneTimeCodeFromMail:(id)arg1 withTimestamp:(id)arg2 andMessageID:(long long)arg3;
- (void)_processOneTimeCodeFromMessages:(id)arg1;
- (id)_savedAccountsWithPasswordsForURL:(id)arg1 inContext:(id)arg2;
- (id)_secureURLWithDomain:(id)arg1;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)arg1;
- (void)_startGeneratorTimer;
- (void)_stopGeneratorTimer;
- (void)_validateCurrentOneTimeCode;
- (bool)_validateURL:(id)arg1 withURLFromOriginBoundCode:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 forOneTimeCode:(id)arg2;
- (id)associatedDomainsManager;
- (void)consumeCurrentOneTimeCode;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)arg1;
- (void)consumeOneTimeCode:(id)arg1;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)arg1 fieldClassification:(long long)arg2;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)arg1 fieldClassification:(long long)arg2 inContext:(id)arg3;
- (id)currentOneTimeCodesWithAppIdentifier:(id)arg1 website:(id)arg2 usernameHint:(id)arg3 fieldClassification:(long long)arg4;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x1[8]; })arg1 website:(id)arg2 usernameHint:(id)arg3 fieldClassification:(long long)arg4;
- (id)delegate;
- (void)didFocusOneTimeCodeField;
- (bool)hasOneTimeCodeForAppWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)init;
- (id)initWithMessagesOneTimeCodeSupport:(bool)arg1;
- (bool)isOneTimeCodeAutoDeletionEnabled;
- (void)removeObserver:(id)arg1;
- (void)removeObserverForOneTimeCode:(id)arg1;
- (void)setAssociatedDomainsManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsOneTimeCodeAutoDeletionEnabled:(bool)arg1;

@end
