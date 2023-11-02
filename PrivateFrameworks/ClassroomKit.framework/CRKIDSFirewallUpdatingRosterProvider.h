
@interface CRKIDSFirewallUpdatingRosterProvider : CRKASMRosterProviderDecoratorBase <CRKIDSLocalFirewallStorage> {
    <CRKIDSPrimitives> * _IDSPrimitives;
    NSSet * _allowedAppleIDs;
    CATOperation * _lastWorkOperation;
    bool  _observingRosters;
    CATOperationQueue * _operationQueue;
    <CRKASMRoster> * _publishedRoster;
    NSObject<CRKASMRosterProviding> * _secondaryRosterProvider;
}

@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, copy) NSSet *allowedAppleIDs;
@property (nonatomic) CATOperation *lastWorkOperation;
@property (getter=isObservingRosters, nonatomic) bool observingRosters;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;
@property (nonatomic, retain) <CRKASMRoster> *publishedRoster;
@property (nonatomic, readonly) NSObject<CRKASMRosterProviding> *secondaryRosterProvider;

+ (id)keyPathsForValuesAffectingRoster;
+ (id)observedKeyPaths;
+ (id)trustedUserAppleIDsFromRoster:(id)arg1;

- (void).cxx_destruct;
- (id)IDSPrimitives;
- (id)allowedAppleIDs;
- (bool)areRosterProvidersPopulated;
- (void)beginObservingRosters;
- (void)dealloc;
- (void)endObservingRosters;
- (void)enqueueWorkOperation:(id)arg1;
- (id)initWithPrimaryRosterProvider:(id)arg1 secondaryRosterProvider:(id)arg2 IDSPrimitives:(id)arg3;
- (id)initWithRosterProvider:(id)arg1 IDSPrimitives:(id)arg2;
- (bool)isObservingRosters;
- (id)lastWorkOperation;
- (id)makeTrustedAppleIDs;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationQueue;
- (id)primaryRosterProvider;
- (id)publishedRoster;
- (id)roster;
- (void)rosterDidChange;
- (id)rosterProviders;
- (id)secondaryRosterProvider;
- (void)setAllowedAppleIDs:(id)arg1;
- (void)setLastWorkOperation:(id)arg1;
- (void)setObservingRosters:(bool)arg1;
- (void)setPublishedRoster:(id)arg1;
- (void)synchronizeFirewallOperationDidFail:(id)arg1;

@end
