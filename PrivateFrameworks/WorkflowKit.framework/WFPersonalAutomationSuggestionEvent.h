
@interface WFPersonalAutomationSuggestionEvent : WFEvent {
    NSString * _activityType;
    NSString * _appBundleIdentifier;
    bool  _completed;
    NSString * _intentType;
    bool  _interacted;
    NSString * _key;
    NSString * _source;
    NSString * _triggerType;
    bool  _visible;
}

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, copy) NSString *intentType;
@property (nonatomic) bool interacted;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *triggerType;
@property (nonatomic) bool visible;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)activityType;
- (id)appBundleIdentifier;
- (bool)completed;
- (id)intentType;
- (bool)interacted;
- (id)key;
- (void)setActivityType:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setIntentType:(id)arg1;
- (void)setInteracted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTriggerType:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)source;
- (id)triggerType;
- (bool)visible;

@end
