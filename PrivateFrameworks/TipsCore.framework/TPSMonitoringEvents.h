
@interface TPSMonitoringEvents : TPSSerializableObject {
    NSDictionary * _desiredOutcomeEventMap;
    NSDictionary * _dismissalEventMap;
    NSDictionary * _displayEventMap;
    NSDictionary * _initialDisplayEventMap;
    NSDictionary * _restartTrackingDisplayEventMap;
    NSDictionary * _restartTrackingTriggerEventMap;
}

@property (nonatomic, copy) NSDictionary *desiredOutcomeEventMap;
@property (nonatomic, copy) NSDictionary *dismissalEventMap;
@property (nonatomic, copy) NSDictionary *displayEventMap;
@property (nonatomic, readonly) bool hasEvents;
@property (nonatomic, copy) NSDictionary *initialDisplayEventMap;
@property (nonatomic, copy) NSDictionary *restartTrackingDisplayEventMap;
@property (nonatomic, copy) NSDictionary *restartTrackingTriggerEventMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)autoDismissEvents;
- (id)clientContextEventsForMap:(id)arg1;
- (id)clientContextKeysForEventOptions:(unsigned long long)arg1;
- (id)clientContextKeysForMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)desiredOutcomeEventMap;
- (id)dismissalEventMap;
- (id)displayEventMap;
- (void)encodeWithCoder:(id)arg1;
- (id)eventMapFromMonitoringEventsDictionary:(id)arg1;
- (unsigned long long)eventOptionsForEventIdentifier:(id)arg1;
- (bool)hasClientContextKeysForEventOptions:(unsigned long long)arg1;
- (bool)hasEvents;
- (bool)hasRegistrableContextualEventsForEventOptions:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 desiredOutcomeDictionary:(id)arg2;
- (id)initialDisplayEventMap;
- (id)registrableContextualEventsForEventOptions:(unsigned long long)arg1 type:(long long)arg2;
- (id)registrableContextualEventsForMap:(id)arg1 type:(long long)arg2;
- (id)restartTrackingDisplayEventMap;
- (id)restartTrackingTriggerEventMap;
- (void)setDesiredOutcomeEventMap:(id)arg1;
- (void)setDismissalEventMap:(id)arg1;
- (void)setDisplayEventMap:(id)arg1;
- (void)setInitialDisplayEventMap:(id)arg1;
- (void)setRestartTrackingDisplayEventMap:(id)arg1;
- (void)setRestartTrackingTriggerEventMap:(id)arg1;

@end
