
@interface ANCSchemaANCAppNotificationMetadata : SISchemaInstrumentationMessage {
    int  _commsNotificationType;
    struct { 
        unsigned int commsNotificationType : 1; 
        unsigned int isSmsEligible : 1; 
        unsigned int isAskWithSiriEnabled : 1; 
    }  _has;
    bool  _isAskWithSiriEnabled;
    bool  _isSmsEligible;
}

@property (nonatomic) int commsNotificationType;
@property (nonatomic) bool hasCommsNotificationType;
@property (nonatomic) bool hasIsAskWithSiriEnabled;
@property (nonatomic) bool hasIsSmsEligible;
@property (nonatomic) bool isAskWithSiriEnabled;
@property (nonatomic) bool isSmsEligible;
@property (nonatomic, readonly) NSData *jsonData;

- (int)commsNotificationType;
- (void)deleteCommsNotificationType;
- (void)deleteIsAskWithSiriEnabled;
- (void)deleteIsSmsEligible;
- (id)dictionaryRepresentation;
- (bool)hasCommsNotificationType;
- (bool)hasIsAskWithSiriEnabled;
- (bool)hasIsSmsEligible;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAskWithSiriEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isSmsEligible;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommsNotificationType:(int)arg1;
- (void)setHasCommsNotificationType:(bool)arg1;
- (void)setHasIsAskWithSiriEnabled:(bool)arg1;
- (void)setHasIsSmsEligible:(bool)arg1;
- (void)setIsAskWithSiriEnabled:(bool)arg1;
- (void)setIsSmsEligible:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
