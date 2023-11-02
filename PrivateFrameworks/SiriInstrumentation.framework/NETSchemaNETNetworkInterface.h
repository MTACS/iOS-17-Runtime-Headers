
@interface NETSchemaNETNetworkInterface : SISchemaInstrumentationMessage {
    int  _connectionType;
    struct { 
        unsigned int connectionType : 1; 
    }  _has;
    bool  _hasName;
    NSString * _name;
}

@property (nonatomic) int connectionType;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (int)connectionType;
- (void)deleteConnectionType;
- (void)deleteName;
- (id)dictionaryRepresentation;
- (bool)hasConnectionType;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
