
@interface PETSchemaPETRawMessage : SISchemaInstrumentationMessage {
    struct { 
        unsigned int type_id : 1; 
    }  _has;
    bool  _hasName;
    bool  _hasRaw_bytes;
    NSString * _name;
    NSData * _raw_bytes;
    unsigned int  _type_id;
}

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasRaw_bytes;
@property (nonatomic) bool hasType_id;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSData *raw_bytes;
@property (nonatomic) unsigned int type_id;

- (void).cxx_destruct;
- (void)deleteName;
- (void)deleteRaw_bytes;
- (void)deleteType_id;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasRaw_bytes;
- (bool)hasType_id;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (id)raw_bytes;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasRaw_bytes:(bool)arg1;
- (void)setHasType_id:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRaw_bytes:(id)arg1;
- (void)setType_id:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)type_id;
- (void)writeTo:(id)arg1;

@end
