
@interface USOSchemaUSONode : SISchemaInstrumentationMessage {
    NSString * _entityLabel;
    struct { 
        unsigned int usoElementId : 1; 
        unsigned int usoVerbElementId : 1; 
    }  _has;
    bool  _hasEntityLabel;
    bool  _hasVerbLabel;
    unsigned int  _usoElementId;
    unsigned int  _usoVerbElementId;
    NSString * _verbLabel;
}

@property (nonatomic, copy) NSString *entityLabel;
@property (nonatomic) bool hasEntityLabel;
@property (nonatomic) bool hasUsoElementId;
@property (nonatomic) bool hasUsoVerbElementId;
@property (nonatomic) bool hasVerbLabel;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) unsigned int usoVerbElementId;
@property (nonatomic, copy) NSString *verbLabel;

- (void).cxx_destruct;
- (void)deleteEntityLabel;
- (void)deleteUsoElementId;
- (void)deleteUsoVerbElementId;
- (void)deleteVerbLabel;
- (id)dictionaryRepresentation;
- (id)entityLabel;
- (bool)hasEntityLabel;
- (bool)hasUsoElementId;
- (bool)hasUsoVerbElementId;
- (bool)hasVerbLabel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntityLabel:(id)arg1;
- (void)setHasEntityLabel:(bool)arg1;
- (void)setHasUsoElementId:(bool)arg1;
- (void)setHasUsoVerbElementId:(bool)arg1;
- (void)setHasVerbLabel:(bool)arg1;
- (void)setUsoElementId:(unsigned int)arg1;
- (void)setUsoVerbElementId:(unsigned int)arg1;
- (void)setVerbLabel:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)usoElementId;
- (unsigned int)usoVerbElementId;
- (id)verbLabel;
- (void)writeTo:(id)arg1;

@end
