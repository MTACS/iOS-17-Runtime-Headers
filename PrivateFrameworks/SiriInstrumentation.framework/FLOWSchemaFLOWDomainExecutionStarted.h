
@interface FLOWSchemaFLOWDomainExecutionStarted : SISchemaInstrumentationMessage {
    int  _domainExecutionType;
    struct { 
        unsigned int domainExecutionType : 1; 
    }  _has;
}

@property (nonatomic) int domainExecutionType;
@property (nonatomic) bool hasDomainExecutionType;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDomainExecutionType;
- (id)dictionaryRepresentation;
- (int)domainExecutionType;
- (bool)hasDomainExecutionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDomainExecutionType:(int)arg1;
- (void)setHasDomainExecutionType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
