
@interface REDataSourceManager : RERelevanceEngineSubsystem <REDataSourceManagerProperties> {
    NSSet * _availableDataSourceIdentifiers;
    bool  _completedFirstElementLoad;
    NSSet * _currentDataSourceIdentifiers;
    NSArray * _currentDataSources;
    NSMutableArray * _dataSourceControllers;
    unsigned long long  _dataSourceState;
    <REDataSourceManagerObserver> * _delegate;
    bool  _disableAutomaticContentManagement;
    NSSet * _disabledDataSources;
    REConcurrentDictionary * _elementGroupMap;
    NSSet * _elementGroupSupportingConfigurations;
    NSDictionary * _identifierApplicationIdentifierMap;
    NSDictionary * _identifierDataSourceMap;
    NSDictionary * _identifierOperatingSystemVersionMap;
    bool  _ignoreAppInstallation;
    REDataSourceLoader * _loader;
    bool  _locationAllowed;
    NSDictionary * _unmanagedDataSourcesMap;
}

@property (retain) NSSet *availableDataSourceIdentifiers;
@property (getter=hasCompletedFirstElementLoad, nonatomic, readonly) bool completedFirstElementLoad;
@property (retain) NSSet *currentDataSourceIdentifiers;
@property (retain) NSArray *currentDataSources;
@property (nonatomic, readonly) NSArray *dataSourceControllers;
@property (nonatomic, readonly) <REDataSourceManagerObserver> *delegate;
@property (nonatomic, readonly) NSSet *disabledDataSources;
@property (nonatomic, readonly) REDataSourceLoader *loader;
@property (nonatomic, readonly) NSSet *unrestirctedDataSourceIdentifiers;

+ (bool)_isPrioritizedDataSourceClass:(Class)arg1;
+ (id)_prioritizedDataSourceClasses;

- (void).cxx_destruct;
- (void)_handleApplicationStateChange;
- (bool)_isApplicationRemovedOrRestrictedForIdentifier:(id)arg1;
- (void)_queue_availableDataSourcesDidChange;
- (void)_queue_loadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_unloadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_updateAvailableDataSourceIdentifiers;
- (void)_updatePreferences;
- (id)availableDataSourceIdentifiers;
- (Class)classForDataSourceIdentifier:(id)arg1;
- (id)currentDataSourceIdentifiers;
- (id)currentDataSources;
- (id)dataSourceControllers;
- (void)dealloc;
- (id)delegate;
- (id)disabledDataSources;
- (id)elementGroupForIdentifier:(id)arg1;
- (void)enumerateElementDataSourceControllers:(id /* block */)arg1;
- (void)enumerateElementDataSourceControllers:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)hasCompletedFirstElementLoad;
- (id)initWithRelevanceEngine:(id)arg1 dataSourceLoader:(id)arg2 withDelegate:(id)arg3;
- (id)loader;
- (struct { long long x1; long long x2; long long x3; })minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (void)pause;
- (void)resume;
- (void)setAvailableDataSourceIdentifiers:(id)arg1;
- (void)setCurrentDataSourceIdentifiers:(id)arg1;
- (void)setCurrentDataSources:(id)arg1;
- (id)unrestirctedDataSourceIdentifiers;

@end
