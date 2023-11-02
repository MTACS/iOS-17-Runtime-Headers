
@interface FPSpotlightCollectorManager : NSObject <FPSpotlightCollectorDelegate> {
    bool  _areMountQueriesEnabled;
    NSMutableDictionary * _collectorByDescriptor;
    NSSet * _currentMountPoints;
    id  _providerDomainChangesToken;
}

@property bool areMountQueriesEnabled;
@property (retain) NSMutableDictionary *collectorByDescriptor;
@property (nonatomic, readonly) NSArray *collectors;
@property (retain) NSSet *currentMountPoints;
@property (readonly) NSSet *effectiveCurrentMountPoints;
@property (retain) id providerDomainChangesToken;

+ (id)_mountPointsFromProviderDomains:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_observeFileProviderDomains;
- (id)_recursiveDescription;
- (bool)areMountQueriesEnabled;
- (id)collectorByDescriptor;
- (void)collectorDidFinish:(id)arg1;
- (id)collectors;
- (id)currentMountPoints;
- (void)dealloc;
- (void)disableMountPointQueries;
- (id)effectiveCurrentMountPoints;
- (void)enableMountPointQueries;
- (id)init;
- (id)mountPointsForCollector:(id)arg1;
- (id)providerDomainChangesToken;
- (void)registerDataSource:(id)arg1;
- (void)resumeCollectors;
- (void)setAreMountQueriesEnabled:(bool)arg1;
- (void)setCollectorByDescriptor:(id)arg1;
- (void)setCurrentMountPoints:(id)arg1;
- (void)setProviderDomainChangesToken:(id)arg1;
- (void)suspendCollectors;
- (void)unregisterDataSource:(id)arg1;

@end
