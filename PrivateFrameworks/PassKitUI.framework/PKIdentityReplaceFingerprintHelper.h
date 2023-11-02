
@interface PKIdentityReplaceFingerprintHelper : NSObject <PKDashboardMoreMenuFactoryEligibility> {
    bool  _canReplace;
    bool  _isRemote;
    unsigned long long  _loading;
    PKSecureElementPass * _pass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasCachedEligibility;
- (id)initWithPass:(id)arg1 isRemote:(bool)arg2;
- (bool)isEligibile;
- (void)isEligibleWithCompletion:(id /* block */)arg1;
- (void)viewControllerWithCompletion:(id /* block */)arg1;

@end
