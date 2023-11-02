
@interface ORCHSchemaORCHCDMRequestEnded : SISchemaInstrumentationMessage {
    bool  _delegatedUserDialogAct;
    struct { 
        unsigned int status : 1; 
        unsigned int delegatedUserDialogAct : 1; 
    }  _has;
    int  _status;
}

@property (nonatomic) bool delegatedUserDialogAct;
@property (nonatomic) bool hasDelegatedUserDialogAct;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int status;

- (bool)delegatedUserDialogAct;
- (void)deleteDelegatedUserDialogAct;
- (void)deleteStatus;
- (id)dictionaryRepresentation;
- (bool)hasDelegatedUserDialogAct;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDelegatedUserDialogAct:(bool)arg1;
- (void)setHasDelegatedUserDialogAct:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
