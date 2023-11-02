
@interface USOSchemaUSOEdgeLabel : SISchemaInstrumentationMessage {
    USOSchemaUSOLabel * _baseEdgeLabel;
    unsigned int  _enumeration;
    struct { 
        unsigned int usoElementId : 1; 
        unsigned int enumeration : 1; 
    }  _has;
    bool  _hasBaseEdgeLabel;
    unsigned int  _usoElementId;
}

@property (nonatomic, retain) USOSchemaUSOLabel *baseEdgeLabel;
@property (nonatomic) unsigned int enumeration;
@property (nonatomic) bool hasBaseEdgeLabel;
@property (nonatomic) bool hasEnumeration;
@property (nonatomic) bool hasUsoElementId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int usoElementId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)baseEdgeLabel;
- (void)deleteBaseEdgeLabel;
- (void)deleteEnumeration;
- (void)deleteUsoElementId;
- (id)dictionaryRepresentation;
- (unsigned int)enumeration;
- (bool)hasBaseEdgeLabel;
- (bool)hasEnumeration;
- (bool)hasUsoElementId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBaseEdgeLabel:(id)arg1;
- (void)setEnumeration:(unsigned int)arg1;
- (void)setHasBaseEdgeLabel:(bool)arg1;
- (void)setHasEnumeration:(bool)arg1;
- (void)setHasUsoElementId:(bool)arg1;
- (void)setUsoElementId:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)usoElementId;
- (void)writeTo:(id)arg1;

@end
