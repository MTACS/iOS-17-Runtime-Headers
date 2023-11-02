
@interface DBDashboardWorkspaceStateResolver : NSObject {
    <DBAppPolicyProviding> * _policyProvider;
}

@property (nonatomic) <DBAppPolicyProviding> *policyProvider;

- (void).cxx_destruct;
- (id)computeNewStateFromState:(id)arg1 andRequest:(id)arg2;
- (id)initWithPolicyProvider:(id)arg1;
- (id)policyProvider;
- (void)setPolicyProvider:(id)arg1;

@end
