
@interface DNDSAppConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider> {
    DNDSAppSpecificSettingsManager * _appSpecificSettingsManager;
    NSHashTable * _delegates;
    NSMutableDictionary * _predicates;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)appActionForActionIdentifier:(id)arg1 applicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (id)appActionsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)clearAppActionWithIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3;
- (id)clearSystemActionWithIdentifier:(id)arg1 modeIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithAppSpecificSettingsManager:(id)arg1;
- (void)invalidateAppContextForActionIdentifier:(id)arg1 applicationIdentifier:(id)arg2 modeIdentifier:(id)arg3;
- (id)predicateForActionIdentifier:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3 error:(id*)arg4;
- (id)predicateForApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (void)refreshWithAvailableModes:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)setAppAction:(id)arg1 forApplicationIdentifier:(id)arg2 modeIdentifier:(id)arg3;
- (id)setPredicate:(id)arg1 forActionIdentifier:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4;
- (id)setSystemAction:(id)arg1 modeIdentifier:(id)arg2;
- (id)setTargetContentIdentifierPrefix:(id)arg1 forActionIdentifier:(id)arg2 forApplicationIdentifier:(id)arg3 modeIdentifier:(id)arg4;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;
- (id)systemActionForActionIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (id)systemActionsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)targetContentIdentifierPrefixForApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(id*)arg3;
- (id)targetContentIdentifierPrefixesForModeIdentifier:(id)arg1 error:(id*)arg2;
- (id)updateSystemActionWithReverseAction:(id)arg1 actionIdentifier:(id)arg2 modeIdentifier:(id)arg3;

@end
