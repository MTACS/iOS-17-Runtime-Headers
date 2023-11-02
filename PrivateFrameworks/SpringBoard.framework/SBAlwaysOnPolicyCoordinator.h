
@interface SBAlwaysOnPolicyCoordinator : NSObject {
    NSMutableSet * _policies;
}

@property (nonatomic, readonly) NSSet *activePolicies;

- (void).cxx_destruct;
- (void)_activatePolicy:(id)arg1;
- (void)activate;
- (id)activePolicies;
- (void)addExternalPolicy:(id)arg1;
- (void)removeExternalPolicy:(id)arg1;

@end
