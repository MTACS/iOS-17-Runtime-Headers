
@interface OPTINSchemaOPTINStatePropagationEvent : SISchemaTopLevelUnionType {
    struct { 
        unsigned int optInState : 1; 
        unsigned int propagationState : 1; 
    }  _has;
    bool  _hasHashedHomeKitAccessoryId;
    SISchemaUUID * _hashedHomeKitAccessoryId;
    int  _optInState;
    int  _propagationState;
}

@property (nonatomic) bool hasHashedHomeKitAccessoryId;
@property (nonatomic) bool hasOptInState;
@property (nonatomic) bool hasPropagationState;
@property (nonatomic, retain) SISchemaUUID *hashedHomeKitAccessoryId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int optInState;
@property (nonatomic) int propagationState;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteHashedHomeKitAccessoryId;
- (void)deleteOptInState;
- (void)deletePropagationState;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasHashedHomeKitAccessoryId;
- (bool)hasOptInState;
- (bool)hasPropagationState;
- (unsigned long long)hash;
- (id)hashedHomeKitAccessoryId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)optInState;
- (int)propagationState;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setHasHashedHomeKitAccessoryId:(bool)arg1;
- (void)setHasOptInState:(bool)arg1;
- (void)setHasPropagationState:(bool)arg1;
- (void)setHashedHomeKitAccessoryId:(id)arg1;
- (void)setOptInState:(int)arg1;
- (void)setPropagationState:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
