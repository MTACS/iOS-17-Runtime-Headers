
@interface ORCHSchemaORCHAceCommandFailed : SISchemaInstrumentationMessage {
    int  _aceCommandType;
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int aceCommandType : 1; 
    }  _has;
}

@property (nonatomic) int aceCommandType;
@property (nonatomic) bool exists;
@property (nonatomic) bool hasAceCommandType;
@property (nonatomic) bool hasExists;
@property (nonatomic, readonly) NSData *jsonData;

- (int)aceCommandType;
- (void)deleteAceCommandType;
- (void)deleteExists;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasAceCommandType;
- (bool)hasExists;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAceCommandType:(int)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasAceCommandType:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
