
@interface DNDSEventBehaviorResolver : NSObject <DNDSSysdiagnoseDataProvider> {
    DNDSAuxiliaryStateMonitor * _auxiliaryStateMonitor;
    CNContactStore * _contactStore;
    <DNDSEventBehaviorResolverDataSource> * _dataSource;
    CNFavorites * _favorites;
    <DNDSModeRepository> * _modeRepository;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _resolutionRecord;
}

@property (nonatomic) <DNDSEventBehaviorResolverDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (id)_activeModeConfigurationForBehavior:(unsigned long long)arg1;
- (id)_legacyModeConfigurationForModeConfiguration:(id)arg1;
- (id)_queue_adjustEventBehaviorResolutionForAuxiliaryState:(id)arg1;
- (bool)_queue_eventSourceIsContact:(id)arg1;
- (bool)_queue_eventSourceIsContact:(id)arg1 inGroupWithIdentifier:(id)arg2;
- (bool)_queue_eventSourceIsEmergencyContact:(id)arg1;
- (bool)_queue_eventSourceIsFavorite:(id)arg1;
- (bool)_queue_eventSourceIsRepeat:(id)arg1 clientDetails:(id)arg2 date:(id)arg3;
- (id)_queue_firstContactForPredicate:(id)arg1;
- (bool)_queue_isBreakthroughAllowedForModeIdentifier:(id)arg1 withConfiguration:(id)arg2 application:(id)arg3 sender:(id)arg4 urgency:(unsigned long long)arg5 eventType:(unsigned long long)arg6 threadIdentifier:(id)arg7 filterCriteria:(id)arg8 notifyAnyway:(bool)arg9 reason:(out unsigned long long*)arg10;
- (bool)_queue_isBreakthroughAllowedForSender:(id)arg1 eventType:(unsigned long long)arg2 clientDetails:(id)arg3 date:(id)arg4 reason:(out unsigned long long*)arg5;
- (id)_queue_resolutionForModeWithConfiguration:(id)arg1 eventDetails:(id)arg2 clientDetails:(id)arg3 state:(id)arg4 date:(id)arg5 error:(id*)arg6;
- (id)_queue_resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (unsigned long long)_queue_resolveOutcomeForEventSender:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 reason:(out unsigned long long*)arg4;
- (bool)_queue_shouldAdjustEventBehaviorForMirroring;
- (id)dataSource;
- (void)dealloc;
- (id)initWithModeRepository:(id)arg1 contactStore:(id)arg2 auxiliaryStateMonitor:(id)arg3;
- (id)resolutionForConfiguration:(id)arg1 eventDetails:(id)arg2 clientDetails:(id)arg3 date:(id)arg4 error:(id*)arg5;
- (id)resolveBehaviorForEventDetails:(id)arg1 clientDetails:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (void)setDataSource:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;

@end
