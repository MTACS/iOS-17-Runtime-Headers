
@interface USOSchemaUSOEntitySpanTier1 : SISchemaInstrumentationMessage {
    NSArray * _alternatives;
    struct { 
        unsigned int index : 1; 
    }  _has;
    bool  _hasOriginAppId;
    bool  _hasOriginEntityId;
    unsigned int  _index;
    NSString * _originAppId;
    NSString * _originEntityId;
    NSArray * _properties;
}

@property (nonatomic, copy) NSArray *alternatives;
@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasOriginAppId;
@property (nonatomic) bool hasOriginEntityId;
@property (nonatomic) unsigned int index;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *originAppId;
@property (nonatomic, copy) NSString *originEntityId;
@property (nonatomic, copy) NSArray *properties;

- (void).cxx_destruct;
- (void)addAlternatives:(id)arg1;
- (void)addProperties:(id)arg1;
- (id)alternatives;
- (id)alternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativesCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAlternatives;
- (void)clearProperties;
- (void)deleteAlternatives;
- (void)deleteIndex;
- (void)deleteOriginAppId;
- (void)deleteOriginEntityId;
- (void)deleteProperties;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasOriginAppId;
- (bool)hasOriginEntityId;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originAppId;
- (id)originEntityId;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasOriginAppId:(bool)arg1;
- (void)setHasOriginEntityId:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setOriginAppId:(id)arg1;
- (void)setOriginEntityId:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
