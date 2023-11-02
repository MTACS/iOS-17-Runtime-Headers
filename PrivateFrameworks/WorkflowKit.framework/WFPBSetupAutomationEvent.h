
@interface WFPBSetupAutomationEvent : PBCodable <NSCopying> {
    NSString * _actionIdentifier;
    NSString * _bundleIdentifier;
    struct { 
        unsigned int requiredRuntimeConfirmation : 1; 
        unsigned int showsNotification : 1; 
    }  _has;
    NSString * _key;
    bool  _requiredRuntimeConfirmation;
    bool  _showsNotification;
    NSString * _triggerType;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool hasActionIdentifier;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasRequiredRuntimeConfirmation;
@property (nonatomic) bool hasShowsNotification;
@property (nonatomic, readonly) bool hasTriggerType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool requiredRuntimeConfirmation;
@property (nonatomic) bool showsNotification;
@property (nonatomic, retain) NSString *triggerType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionIdentifier;
- (bool)hasBundleIdentifier;
- (bool)hasKey;
- (bool)hasRequiredRuntimeConfirmation;
- (bool)hasShowsNotification;
- (bool)hasTriggerType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requiredRuntimeConfirmation;
- (void)setActionIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasRequiredRuntimeConfirmation:(bool)arg1;
- (void)setHasShowsNotification:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setRequiredRuntimeConfirmation:(bool)arg1;
- (void)setShowsNotification:(bool)arg1;
- (void)setTriggerType:(id)arg1;
- (bool)showsNotification;
- (id)triggerType;
- (void)writeTo:(id)arg1;

@end
