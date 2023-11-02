
@interface CLKComplicationClient : NSObject <CLKComplicationDataSource, CLKComplicationServer> {
    NSSet * _activeComplications;
    id /* block */  _checkinHandler;
    NSString * _clientBundlePath;
    NSString * _clientIdentifier;
    NSXPCConnection * _connection;
    <CLKComplicationClientDelegate> * _delegate;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    NSHashTable * _invalidationObservers;
    NSLock * _invalidationObserversLock;
    NSNumber * _pid;
}

@property (nonatomic, copy) NSSet *activeComplications;
@property (nonatomic, copy) id /* block */ checkinHandler;
@property (nonatomic, readonly) NSString *clientBundlePath;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLKComplicationClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSNumber *pid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CLKComplicationWidgetMigrator> *widgetMigrator;

- (void).cxx_destruct;
- (void)_handleConnectionInvalidated;
- (id)activeComplications;
- (void)addInvalidationObserver:(id)arg1;
- (id /* block */)checkinHandler;
- (void)checkinWithClientIdentifier:(id)arg1 bundlePath:(id)arg2;
- (id)clientBundlePath;
- (id)clientIdentifier;
- (id)delegate;
- (void)extendTimelineForComplication:(id)arg1;
- (void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getComplicationDescriptorsWithHandler:(id /* block */)arg1;
- (void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getNextRequestedUpdateDateWithHandler:(id /* block */)arg1;
- (void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineEndDateForComplication:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(id /* block */)arg4;
- (void)getWidgetMigrationConfigurationFrom:(id)arg1 withHandler:(id /* block */)arg2;
- (void)handleSharedComplicationDescriptors:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)notifyDebugTimeoutWithCharging:(bool)arg1;
- (id)pid;
- (void)reloadComplicationDescriptors;
- (void)reloadTimelineForComplication:(id)arg1;
- (void)removeInvalidationObserver:(id)arg1;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)setActiveComplications:(id)arg1;
- (void)setCheckinHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
