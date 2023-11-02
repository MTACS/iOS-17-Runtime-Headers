
@interface WiFiAnalyticsAWDSlowWiFiNotification : PBCodable <NSCopying> {
    unsigned int  _actionField;
    bool  _facetimeCallInProgress;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int actionField : 1; 
        unsigned int recoveryAction : 1; 
        unsigned int recoveryReason : 1; 
        unsigned int userInput : 1; 
        unsigned int facetimeCallInProgress : 1; 
    }  _has;
    unsigned int  _recoveryAction;
    unsigned int  _recoveryReason;
    unsigned long long  _timestamp;
    unsigned int  _userInput;
}

@property (nonatomic) unsigned int actionField;
@property (nonatomic) bool facetimeCallInProgress;
@property (nonatomic) bool hasActionField;
@property (nonatomic) bool hasFacetimeCallInProgress;
@property (nonatomic) bool hasRecoveryAction;
@property (nonatomic) bool hasRecoveryReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUserInput;
@property (nonatomic) unsigned int recoveryAction;
@property (nonatomic) unsigned int recoveryReason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int userInput;

- (unsigned int)actionField;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)facetimeCallInProgress;
- (bool)hasActionField;
- (bool)hasFacetimeCallInProgress;
- (bool)hasRecoveryAction;
- (bool)hasRecoveryReason;
- (bool)hasTimestamp;
- (bool)hasUserInput;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)recoveryAction;
- (unsigned int)recoveryReason;
- (void)setActionField:(unsigned int)arg1;
- (void)setFacetimeCallInProgress:(bool)arg1;
- (void)setHasActionField:(bool)arg1;
- (void)setHasFacetimeCallInProgress:(bool)arg1;
- (void)setHasRecoveryAction:(bool)arg1;
- (void)setHasRecoveryReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserInput:(bool)arg1;
- (void)setRecoveryAction:(unsigned int)arg1;
- (void)setRecoveryReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInput:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)userInput;
- (void)writeTo:(id)arg1;

@end
