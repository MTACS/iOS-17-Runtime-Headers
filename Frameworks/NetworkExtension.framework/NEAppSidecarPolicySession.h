
@interface NEAppSidecarPolicySession : NSObject {
    NSMutableArray * _policyIDList;
    NEPolicySession * _policySession;
}

+ (id)connectionIdentifier;

- (void).cxx_destruct;
- (id)init;
- (bool)installPolicies;
- (bool)uninstallPolicies;

@end
