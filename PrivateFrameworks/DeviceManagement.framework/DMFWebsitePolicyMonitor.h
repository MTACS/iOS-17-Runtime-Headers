
@interface DMFWebsitePolicyMonitor : NSObject {
    NSUUID * _identifier;
    NSArray * _policyTypes;
}

@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSArray *policyTypes;

- (void).cxx_destruct;
- (void)_fetchCategoriesIfNeededForWebsiteURLs:(id)arg1 response:(id /* block */)arg2;
- (void)dealloc;
- (id)identifier;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (id)policyTypes;
- (void)requestPoliciesForWebsites:(id)arg1 completionHandler:(id /* block */)arg2;

@end
