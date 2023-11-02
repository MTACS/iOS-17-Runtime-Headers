
@interface ASPublicKeyCredentialOperation : NSObject {
    NSObject<OS_os_activity> * _activity;
    ASCPublicKeyCredentialAssertionOptions * _assertionOptions;
    LAContext * _authenticatedLAContext;
    NSData * _clientDataJSONForApps;
    ASCPublicKeyCredentialCreationOptions * _creationOptions;
    <ASPublicKeyCredentialManagerDelegate> * _delegate;
    bool  _hasSelectedAssertion;
    bool  _hasTornDown;
    NSMutableDictionary * _identifiersToAssertionResponses;
    NSObject<OS_dispatch_semaphore> * _internalSemaphore;
    NSError * _overrideError;
    _WKWebAuthenticationPanel * _panel;
    NSString * _relyingPartyIdentifier;
    WBSSavedAccountContext * _savedAccountContext;
    id /* block */  _selectPlatformAssertionCallback;
    id /* block */  _selectSecurityKeyAssertionCallback;
    bool  _shouldRequireUserVerification;
    NSString * _sourceApplicationIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, copy) ASCPublicKeyCredentialAssertionOptions *assertionOptions;
@property (nonatomic, retain) LAContext *authenticatedLAContext;
@property (nonatomic, copy) NSData *clientDataJSONForApps;
@property (nonatomic, copy) ASCPublicKeyCredentialCreationOptions *creationOptions;
@property (nonatomic) <ASPublicKeyCredentialManagerDelegate> *delegate;
@property (nonatomic, readonly) bool hasSelectedAssertion;
@property (nonatomic, readonly) bool hasTornDown;
@property (nonatomic, readonly, copy) NSDictionary *identifiersToAssertionResponses;
@property (nonatomic, copy) NSError *overrideError;
@property (nonatomic, retain) _WKWebAuthenticationPanel *panel;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, retain) WBSSavedAccountContext *savedAccountContext;
@property (nonatomic) bool shouldRequireUserVerification;
@property (nonatomic, copy) NSString *sourceApplicationIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)activity;
- (id)assertionOptions;
- (id)authenticatedLAContext;
- (id)clientDataJSONForApps;
- (id)creationOptions;
- (id)delegate;
- (bool)hasSelectedAssertion;
- (bool)hasTornDown;
- (id)identifiersToAssertionResponses;
- (id)initWithRelyingPartyIdentifier:(id)arg1 delegate:(id)arg2 parentActivity:(id)arg3;
- (void)mergeIdentifiersToAssertionResponses:(id)arg1;
- (id)overrideError;
- (id)panel;
- (id)relyingPartyIdentifier;
- (id)savedAccountContext;
- (void)selectPlatformAssertion:(id)arg1;
- (void)selectSecurityKeyAssertion:(id)arg1;
- (void)setAssertionOptions:(id)arg1;
- (void)setAuthenticatedLAContext:(id)arg1;
- (void)setClientDataJSONForApps:(id)arg1;
- (void)setCreationOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverrideError:(id)arg1;
- (void)setPanel:(id)arg1;
- (void)setPlatformAssertionSelectionCallback:(id /* block */)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setSavedAccountContext:(id)arg1;
- (void)setSecurityKeyAssertionSelectionCallback:(id /* block */)arg1;
- (void)setShouldRequireUserVerification:(bool)arg1;
- (void)setSourceApplicationIdentifier:(id)arg1;
- (bool)shouldRequireUserVerification;
- (id)sourceApplicationIdentifier;
- (void)tearDownIfNecessary;
- (id)uuid;

@end
