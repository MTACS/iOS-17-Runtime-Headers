
@interface _DKApplicationUsageMonitor : _DKMonitor <FBSDisplayObserving> {
    NSSet * _activeApplications;
    NSSet * _activeCarPlayApplications;
    NSSet * _activeExternalApplications;
    FBSDisplayLayoutMonitor * _carPlayMonitor;
    FBSDisplayMonitor * _displayMonitor;
    FBSDisplayLayoutMonitor * _externalMonitor;
    NSDictionary * _inUseApplicationEvents;
    FBSDisplayLayoutMonitor * _monitor;
}

@property (nonatomic, retain) NSSet *activeApplications;
@property (nonatomic, retain) NSSet *activeCarPlayApplications;
@property (nonatomic, retain) NSSet *activeExternalApplications;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *carPlayMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayMonitor *displayMonitor;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *externalMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *inUseApplicationEvents;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *monitor;
@property (readonly) Class superclass;

+ (id)_eventWithBundleIdentifier:(id)arg1 startDate:(id)arg2 usageType:(long long)arg3 usageTrusted:(bool)arg4;
+ (id)eventStream;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (id)activeApplications;
- (id)activeCarPlayApplications;
- (id)activeExternalApplications;
- (id)carPlayMonitor;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)arg1 clearAll:(bool)arg2;
- (id)displayMonitor;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (id)externalMonitor;
- (id)inUseApplicationEvents;
- (id)init;
- (void)invalidateInstantState;
- (id)monitor;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)setActiveApplications:(id)arg1;
- (void)setActiveCarPlayApplications:(id)arg1;
- (void)setActiveExternalApplications:(id)arg1;
- (void)setCarPlayMonitor:(id)arg1;
- (void)setDisplayMonitor:(id)arg1;
- (void)setExternalMonitor:(id)arg1;
- (void)setInUseApplicationEvents:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateActiveApplicationsWithLayout:(id)arg1 displayType:(unsigned long long)arg2;
- (void)updateAppDataInContextStore;
- (void)updateInUseApplications:(id)arg1 activeApplications:(id)arg2;

@end
