
@interface DMFiCloudPolicyMonitor : NSObject {
    long long  _iCloudLogoutPolicy;
    NSUUID * _identifier;
    NSArray * _policyTypes;
}

@property (nonatomic) long long iCloudLogoutPolicy;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSArray *policyTypes;

+ (id)iCloudLogoutPolicyForPoliciesByType:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)iCloudLogoutPolicy;
- (id)identifier;
- (id)init;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (id)policyTypes;
- (void)requestiCloudLogoutPolicyWithCompletionHandler:(id /* block */)arg1;
- (id)requestiCloudLogoutPolicyWithError:(id*)arg1;
- (void)setICloudLogoutPolicy:(long long)arg1;

@end
