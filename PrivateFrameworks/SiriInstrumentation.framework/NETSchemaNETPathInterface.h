
@interface NETSchemaNETPathInterface : SISchemaInstrumentationMessage {
    struct { 
        unsigned int type : 1; 
        unsigned int index : 1; 
    }  _has;
    bool  _hasName;
    unsigned int  _index;
    NSString * _name;
    int  _type;
}

@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int index;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)deleteIndex;
- (void)deleteName;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasName;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)type;
- (void)writeTo:(id)arg1;

@end
