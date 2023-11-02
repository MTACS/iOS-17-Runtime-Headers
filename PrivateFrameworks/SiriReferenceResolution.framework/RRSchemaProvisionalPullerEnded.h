
@interface RRSchemaProvisionalPullerEnded : SISchemaInstrumentationMessage {
    int  _entityCount;
    struct { 
        unsigned int entityCount : 1; 
    }  _has;
    bool  _hasName;
    NSString * _name;
}

@property (nonatomic) int entityCount;
@property (nonatomic) bool hasEntityCount;
@property (nonatomic) bool hasName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)entityCount;
- (bool)hasEntityCount;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setEntityCount:(int)arg1;
- (void)setHasEntityCount:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
