
@interface ASDMediaClipTask : AMSTask <AMSBagConsumer> {
    <AMSBagProtocol> * _bag;
    NSString * _bundleID;
    NSString * _clientID;
    AMSProcessInfo * _clientInfo;
    NSNumber * _externalVersionID;
    NSString * _logKey;
    unsigned long long  _signpostID;
}

@property (nonatomic, retain) NSString *bundleID;
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
- (id)bundleID;
- (id)clientInfo;
- (id)externalVersionID;
- (id)initWithClientID:(id)arg1 bag:(id)arg2;
- (id)perform;
- (void)setBundleID:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setExternalVersionID:(id)arg1;

@end
