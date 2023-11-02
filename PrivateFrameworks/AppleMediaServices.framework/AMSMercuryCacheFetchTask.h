
@interface AMSMercuryCacheFetchTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSSet * _cacheTypeIDs;
    NSString * _clientIdentifier;
    AMSProcessInfo * _clientInfo;
    NSString * _clientVersion;
    NSString * _logKey;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) NSSet *cacheTypeIDs;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly) NSString *clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logKey;
@property (readonly) Class superclass;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)requestEncoderWithSharedProperties:(id)arg1 task:(id)arg2;
+ (id)sharedPropertiesFromTask:(id)arg1;

- (void).cxx_destruct;
- (id)_updateEndpointURLRequestWithError:(id*)arg1;
- (id)account;
- (id)bag;
- (id)cacheTypeIDs;
- (id)clientIdentifier;
- (id)clientInfo;
- (id)clientVersion;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 cacheTypeIDs:(id)arg3 clientIdentifier:(id)arg4 clientVersion:(id)arg5;
- (id)logKey;
- (id)perform;
- (void)setClientInfo:(id)arg1;
- (void)setLogKey:(id)arg1;

@end
