
@interface EDWidgetUpdateController : NSObject <EDMessageChangeHookResponder, EFLoggable> {
    NSSet * _identifiers;
    NSDate * _lastUpdate;
    long long  _numberOfUpdates;
    CHSWidgetConfigurationReader * _reader;
    NSArray * _timelineControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *identifiers;
@property (nonatomic, retain) NSDate *lastUpdate;
@property (nonatomic) long long numberOfUpdates;
@property (nonatomic, retain) CHSWidgetConfigurationReader *reader;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *timelineControllers;

+ (id)log;

- (void).cxx_destruct;
- (long long)_activityDelay;
- (void)_hasUserConfiguredMailWidget:(id /* block */)arg1;
- (void)_refreshTimelinesWithReason:(id)arg1;
- (void)_restoreFromUserDefaults;
- (void)_runActivity;
- (void)_scheduleActivityWithReason:(id)arg1;
- (void)_updateLastUpdateInformation;
- (void)_writeUserDefaults;
- (void)dealloc;
- (id)identifiers;
- (id)initWithWidgetBundleIdentifier:(id)arg1 widgetKindIdentifiers:(id)arg2 hookRegistry:(id)arg3;
- (id)lastUpdate;
- (long long)numberOfUpdates;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (id)reader;
- (void)setIdentifiers:(id)arg1;
- (void)setLastUpdate:(id)arg1;
- (void)setNumberOfUpdates:(long long)arg1;
- (void)setReader:(id)arg1;
- (void)setTimelineControllers:(id)arg1;
- (id)timelineControllers;

@end
