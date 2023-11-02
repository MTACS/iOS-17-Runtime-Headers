
@interface NETSchemaNETEndpoint : SISchemaInstrumentationMessage {
    struct { 
        unsigned int type : 1; 
        unsigned int port : 1; 
    }  _has;
    unsigned int  _port;
    int  _type;
}

@property (nonatomic) bool hasPort;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int port;
@property (nonatomic) int type;

- (void)deletePort;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (bool)hasPort;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)port;
- (bool)readFrom:(id)arg1;
- (void)setHasPort:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPort:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)type;
- (void)writeTo:(id)arg1;

@end
