
@interface PSAppDataUsagePolicyCache : NSObject {
    CoreTelephonyClient * _ctClient;
    struct __CTServerConnection { } * _ctServerConnection;
    NSCache * _policyCache;
}

@property (nonatomic, retain) CoreTelephonyClient *ctClient;
@property (nonatomic, retain) struct __CTServerConnection { }*ctServerConnection;
@property (nonatomic, retain) NSCache *policyCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addPoliciesToCache:(id)arg1;
- (void)clearCache;
- (id)ctClient;
- (struct __CTServerConnection { }*)ctServerConnection;
- (void)dealloc;
- (void)fetchUsagePoliciesFor:(id)arg1;
- (void)fetchUsagePolicyFor:(id)arg1;
- (id)getLogger;
- (void)handlePolicyChangedNotification;
- (id)init;
- (id)initPrivate;
- (void)managedConfigurationProfileListDidChange;
- (void)managedConfigurationSettingsDidChange;
- (id)policiesFor:(id)arg1;
- (id)policyCache;
- (void)setCtClient:(id)arg1;
- (void)setCtServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)setPolicies:(id)arg1 completion:(id /* block */)arg2;
- (void)setPolicyCache:(id)arg1;
- (void)willEnterForeground;

@end
