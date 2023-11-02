
@interface WFPBPersonalAutomationSuggestionEvent : PBCodable <NSCopying> {
    NSString * _activityType;
    NSString * _appBundleIdentifier;
    bool  _completed;
    struct { 
        unsigned int completed : 1; 
        unsigned int interacted : 1; 
        unsigned int visible : 1; 
    }  _has;
    NSString * _intentType;
    bool  _interacted;
    NSString * _key;
    NSString * _source;
    NSString * _triggerType;
    bool  _visible;
}

@property (nonatomic, retain) NSString *activityType;
@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, readonly) bool hasActivityType;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic) bool hasCompleted;
@property (nonatomic, readonly) bool hasIntentType;
@property (nonatomic) bool hasInteracted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, readonly) bool hasTriggerType;
@property (nonatomic) bool hasVisible;
@property (nonatomic, retain) NSString *intentType;
@property (nonatomic) bool interacted;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSString *triggerType;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (id)activityType;
- (id)appBundleIdentifier;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityType;
- (bool)hasAppBundleIdentifier;
- (bool)hasCompleted;
- (bool)hasIntentType;
- (bool)hasInteracted;
- (bool)hasKey;
- (bool)hasSource;
- (bool)hasTriggerType;
- (bool)hasVisible;
- (unsigned long long)hash;
- (id)intentType;
- (bool)interacted;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setHasInteracted:(bool)arg1;
- (void)setHasVisible:(bool)arg1;
- (void)setIntentType:(id)arg1;
- (void)setInteracted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTriggerType:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)source;
- (id)triggerType;
- (bool)visible;
- (void)writeTo:(id)arg1;

@end
