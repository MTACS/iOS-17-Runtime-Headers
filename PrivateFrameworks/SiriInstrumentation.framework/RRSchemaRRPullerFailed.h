
@interface RRSchemaRRPullerFailed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int name : 1; 
        unsigned int isTimeout : 1; 
    }  _has;
    bool  _isTimeout;
    int  _name;
}

@property (nonatomic) bool hasIsTimeout;
@property (nonatomic) bool hasName;
@property (nonatomic) bool isTimeout;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int name;

- (void)deleteIsTimeout;
- (void)deleteName;
- (id)dictionaryRepresentation;
- (bool)hasIsTimeout;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTimeout;
- (id)jsonData;
- (int)name;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTimeout:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setIsTimeout:(bool)arg1;
- (void)setName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
