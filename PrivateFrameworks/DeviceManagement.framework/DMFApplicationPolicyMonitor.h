
@interface DMFApplicationPolicyMonitor : NSObject {
    NSUUID * _identifier;
    NSMutableDictionary * _lastRequestDateByBundleIdentifiers;
    NSArray * _policyTypes;
    DMFPolicyRegistration * _registration;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSArray *policyTypes;
@property (nonatomic, readonly) DMFPolicyRegistration *registration;

+ (void)_fetchCategoriesForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_fetchCategoriesForBundleIdentifiers:(id)arg1 withError:(id*)arg2;
+ (void)createPolicyMonitorWithPolicyChangeHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
+ (id)fetchParentBundleIdentifiersForBundleIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithPolicyChangeHandler:(id /* block */)arg1 addingRegistration:(bool)arg2;
- (void)dealloc;
- (id)identifier;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (id)policyTypes;
- (id)registration;
- (void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestPoliciesForBundleIdentifiers:(id)arg1 withError:(id*)arg2;

@end
