
@interface FLOWLINKSchemaFLOWLINKActionParameter : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isArray : 1; 
        unsigned int type : 1; 
    }  _has;
    bool  _hasName;
    bool  _isArray;
    NSString * _name;
    int  _type;
}

@property (nonatomic) bool hasIsArray;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasType;
@property (nonatomic) bool isArray;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)deleteIsArray;
- (void)deleteName;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (bool)hasIsArray;
- (bool)hasName;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isArray;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasIsArray:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsArray:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)type;
- (void)writeTo:(id)arg1;

@end
