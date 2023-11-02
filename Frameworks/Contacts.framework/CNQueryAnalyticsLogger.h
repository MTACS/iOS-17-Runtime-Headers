
@interface CNQueryAnalyticsLogger : NSObject <CNQueryAnalyticsLogger> {
    NSObject<OS_tcc_identity> * _assumedIdentity;
    CNAuditToken * _auditToken;
    <CNKeyboardStateMonitor> * _keyboardStateMonitor;
    CNPair * _processIdentity;
}

@property (nonatomic, retain) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic, retain) CNAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNKeyboardStateMonitor> *keyboardStateMonitor;
@property (nonatomic, copy) CNPair *processIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assumedIdentity;
- (id)auditToken;
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2;
- (id)keyboardStateMonitor;
- (id)processIdentity;
- (void)recordQueryWithFetchRequest:(id)arg1;
- (void)setAssumedIdentity:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setKeyboardStateMonitor:(id)arg1;
- (void)setProcessIdentity:(id)arg1;

@end
