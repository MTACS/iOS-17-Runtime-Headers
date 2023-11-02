
@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSString * _profile;
    NSString * _profileVersion;
    NSArray * _requestedKeys;
}

@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *profile;
@property (nonatomic, retain) NSString *profileVersion;
@property (nonatomic, retain) NSArray *requestedKeys;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchValuesForKeys:(id)arg1 bag:(id)arg2 startingAtIndex:(long long)arg3 valuesArray:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)profile;
- (id)profileVersion;
- (id)requestedKeys;
- (id)runAction;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;
- (void)setRequestedKeys:(id)arg1;

@end
