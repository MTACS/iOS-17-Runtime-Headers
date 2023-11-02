
@interface USOSchemaUSONodeDataTier1 : SISchemaInstrumentationMessage {
    struct { 
        unsigned int index : 1; 
        unsigned int integerPayload : 1; 
    }  _has;
    bool  _hasStringPayload;
    unsigned int  _index;
    int  _integerPayload;
    NSArray * _normalizedStringPayloads;
    NSString * _stringPayload;
}

@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasIntegerPayload;
@property (nonatomic) bool hasStringPayload;
@property (nonatomic) unsigned int index;
@property (nonatomic) int integerPayload;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *normalizedStringPayloads;
@property (nonatomic, copy) NSString *stringPayload;

- (void).cxx_destruct;
- (void)addNormalizedStringPayloads:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearNormalizedStringPayloads;
- (void)deleteIndex;
- (void)deleteIntegerPayload;
- (void)deleteNormalizedStringPayloads;
- (void)deleteStringPayload;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasIntegerPayload;
- (bool)hasStringPayload;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)integerPayload;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)normalizedStringPayloads;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalizedStringPayloadsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasIntegerPayload:(bool)arg1;
- (void)setHasStringPayload:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setIntegerPayload:(int)arg1;
- (void)setNormalizedStringPayloads:(id)arg1;
- (void)setStringPayload:(id)arg1;
- (id)stringPayload;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
