
@interface CRKASMNetworkCheckingRosterProvider : CRKASMRosterProviderDecoratorBase {
    CATNetworkReachability * _networkReachability;
}

@property (nonatomic, readonly) CATNetworkReachability *networkReachability;

+ (id)reachabilityError;

- (void).cxx_destruct;
- (void)createCourseWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRosterProvider:(id)arg1;
- (id)networkReachability;
- (void)removeCourseWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;

@end
