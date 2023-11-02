
@interface AMSURLParser : NSObject <AMSBagConsumer> {
    <AMSBagProtocol> * _bag;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_commerceUIArrayForKey:(id)arg1;
- (id)_correctURL:(id)arg1;
- (id)_defaultWebAllowedForURL:(id)arg1;
- (id)_dynamicUIAllowedForURL:(id)arg1;
- (id)_legacyWebAllowedForURL:(id)arg1;
- (bool)_matchURL:(id)arg1 toPatterns:(id)arg2;
- (void)_waitForPromises:(id)arg1 block:(id /* block */)arg2;
- (id)bag;
- (id)bagContract;
- (id)initWithBag:(id)arg1;
- (id)initWithBagContract:(id)arg1;
- (id)isCommerceUIURL:(id)arg1;
- (void)setBag:(id)arg1;
- (id)typeForCommerceUIURL:(id)arg1;
- (id)typeForURL:(id)arg1;

@end
