
@interface AMSClipMediaTask : AMSTask <AMSBagConsumer> {
    NSURL * _URL;
    <AMSBagProtocol> * _bag;
    NSString * _bundleID;
    NSString * _clientID;
    AMSProcessInfo * _clientInfo;
    NSNumber * _externalVersionID;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *externalVersionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)URL;
- (id)_componentsPromise;
- (id)_performJourneysLookup;
- (id)_performNetworkLookup;
- (id)bag;
- (id)bundleID;
- (id)clientID;
- (id)clientInfo;
- (id)externalVersionID;
- (id)initWithClientID:(id)arg1 bundleID:(id)arg2 URL:(id)arg3 bag:(id)arg4;
- (id)perform;
- (void)setBag:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setExternalVersionID:(id)arg1;
- (void)setURL:(id)arg1;

@end
