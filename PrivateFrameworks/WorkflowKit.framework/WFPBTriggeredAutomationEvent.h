
@interface WFPBTriggeredAutomationEvent : PBCodable <NSCopying> {
    unsigned int  _batchCount;
    unsigned int  _batchDroppedCount;
    struct { 
        unsigned int batchCount : 1; 
        unsigned int batchDroppedCount : 1; 
        unsigned int requiredRuntimeConfirmation : 1; 
        unsigned int showsNotification : 1; 
    }  _has;
    NSString * _key;
    bool  _requiredRuntimeConfirmation;
    bool  _showsNotification;
    NSString * _triggerType;
}

@property (nonatomic) unsigned int batchCount;
@property (nonatomic) unsigned int batchDroppedCount;
@property (nonatomic) bool hasBatchCount;
@property (nonatomic) bool hasBatchDroppedCount;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasRequiredRuntimeConfirmation;
@property (nonatomic) bool hasShowsNotification;
@property (nonatomic, readonly) bool hasTriggerType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool requiredRuntimeConfirmation;
@property (nonatomic) bool showsNotification;
@property (nonatomic, retain) NSString *triggerType;

- (void).cxx_destruct;
- (unsigned int)batchCount;
- (unsigned int)batchDroppedCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBatchCount;
- (bool)hasBatchDroppedCount;
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
- (void)setBatchCount:(unsigned int)arg1;
- (void)setBatchDroppedCount:(unsigned int)arg1;
- (void)setHasBatchCount:(bool)arg1;
- (void)setHasBatchDroppedCount:(bool)arg1;
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
