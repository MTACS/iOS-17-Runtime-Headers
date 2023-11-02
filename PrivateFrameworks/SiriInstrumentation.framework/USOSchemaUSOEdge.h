
@interface USOSchemaUSOEdge : SISchemaInstrumentationMessage {
    unsigned int  _fromIndex;
    struct { 
        unsigned int fromIndex : 1; 
        unsigned int toIndex : 1; 
    }  _has;
    bool  _hasLabel;
    USOSchemaUSOEdgeLabel * _label;
    unsigned int  _toIndex;
}

@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) bool hasFromIndex;
@property (nonatomic) bool hasLabel;
@property (nonatomic) bool hasToIndex;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOEdgeLabel *label;
@property (nonatomic) unsigned int toIndex;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFromIndex;
- (void)deleteLabel;
- (void)deleteToIndex;
- (id)dictionaryRepresentation;
- (unsigned int)fromIndex;
- (bool)hasFromIndex;
- (bool)hasLabel;
- (bool)hasToIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setFromIndex:(unsigned int)arg1;
- (void)setHasFromIndex:(bool)arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setHasToIndex:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setToIndex:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)toIndex;
- (void)writeTo:(id)arg1;

@end
