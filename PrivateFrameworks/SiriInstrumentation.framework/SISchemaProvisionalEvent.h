
@interface SISchemaProvisionalEvent : SISchemaTopLevelUnionType {
    SISchemaAnyEvent * _anyEvent;
    struct { 
        unsigned int version : 1; 
    }  _has;
    bool  _hasAnyEvent;
    bool  _hasTypeId;
    NSString * _typeId;
    long long  _version;
}

@property (nonatomic, retain) SISchemaAnyEvent *anyEvent;
@property (nonatomic) bool hasAnyEvent;
@property (nonatomic) bool hasTypeId;
@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *typeId;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)anyEvent;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAnyEvent;
- (void)deleteTypeId;
- (void)deleteVersion;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasAnyEvent;
- (bool)hasTypeId;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAnyEvent:(id)arg1;
- (void)setHasAnyEvent:(bool)arg1;
- (void)setHasTypeId:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setTypeId:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)suppressMessageUnderConditions;
- (id)typeId;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
