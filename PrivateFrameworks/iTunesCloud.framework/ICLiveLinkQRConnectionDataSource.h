
@interface ICLiveLinkQRConnectionDataSource : NSObject <MSVQRConnectionSessionDataSource> {
    IDSAccount * _account;
    id /* block */  _dataSourceErrorHandler;
    NSString * _externalIdentifier;
    NSUUID * _groupSessionIdentifier;
    NSDictionary * _groupSessionOptions;
    IDSPseudonym * _pseudonym;
    MSVTimer * _pseudonymRenewalTimer;
    NSObject<OS_dispatch_queue> * _queue;
    ICSharedListeningConnectionReport * _report;
    IDSService * _service;
    NSString * _sharedListeningSessionIdentifier;
    NSURL * _sharedListeningSessionInviteURL;
    NSString * _sharedSessionToken;
}

@property (nonatomic, retain) IDSAccount *account;
@property (nonatomic, readonly) NSString *applicationProtocol;
@property (nonatomic, copy) id /* block */ dataSourceErrorHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic, retain) NSUUID *groupSessionIdentifier;
@property (nonatomic, retain) NSDictionary *groupSessionOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, retain) IDSPseudonym *pseudonym;
@property (nonatomic, retain) MSVTimer *pseudonymRenewalTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) ICSharedListeningConnectionReport *report;
@property (nonatomic, readonly) NSString *rpcPath;
@property (nonatomic, retain) IDSService *service;
@property (nonatomic, copy) NSString *sharedListeningSessionIdentifier;
@property (nonatomic, retain) NSURL *sharedListeningSessionInviteURL;
@property (nonatomic, retain) NSString *sharedSessionToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ trustHandler;

+ (id)dataSourceForExistingSharedListeningSession:(id)arg1 identity:(id)arg2;
+ (id)dataSourceForNewSharedListeningSessionWithIdentity:(id)arg1;

- (void).cxx_destruct;
- (void)_beginPseudonymAutoRenewal;
- (void)_joinSharedListeningSessionWithCompletion:(id /* block */)arg1;
- (void)_provisionUserPseudonymWithCompletion:(id /* block */)arg1;
- (void)_renewUserPseudonym;
- (void)_revokeUserPseudonymWithCompletion:(id /* block */)arg1;
- (id)account;
- (id)applicationProtocol;
- (id /* block */)dataSourceErrorHandler;
- (void)dealloc;
- (id)externalIdentifier;
- (id)groupSessionIdentifier;
- (id)groupSessionOptions;
- (id)initWithSharedListeningSessionIdentifier:(id)arg1 identity:(id)arg2;
- (id)pluginIdentifier;
- (void)populateWithCompletion:(id /* block */)arg1;
- (id)pseudonym;
- (id)pseudonymRenewalTimer;
- (id)queue;
- (id)report;
- (id)rpcPath;
- (id)service;
- (id)sessionURLForBag:(id)arg1 error:(id*)arg2;
- (void)setAccount:(id)arg1;
- (void)setDataSourceErrorHandler:(id /* block */)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setGroupSessionIdentifier:(id)arg1;
- (void)setGroupSessionOptions:(id)arg1;
- (void)setPseudonym:(id)arg1;
- (void)setPseudonymRenewalTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReport:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSharedListeningSessionIdentifier:(id)arg1;
- (void)setSharedListeningSessionInviteURL:(id)arg1;
- (void)setSharedSessionToken:(id)arg1;
- (id)sharedListeningSessionIdentifier;
- (id)sharedListeningSessionInviteURL;
- (id)sharedSessionToken;
- (id /* block */)trustHandler;

@end
