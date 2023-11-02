
@interface NETSchemaNETHandShakeProtocol : SISchemaInstrumentationMessage {
    unsigned long long  _handShakeDuration;
    unsigned int  _handShakeRTT;
    struct { 
        unsigned int protocol : 1; 
        unsigned int handShakeRTT : 1; 
        unsigned int handShakeDuration : 1; 
    }  _has;
    int  _protocol;
}

@property (nonatomic) unsigned long long handShakeDuration;
@property (nonatomic) unsigned int handShakeRTT;
@property (nonatomic) bool hasHandShakeDuration;
@property (nonatomic) bool hasHandShakeRTT;
@property (nonatomic) bool hasProtocol;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int protocol;

- (void)deleteHandShakeDuration;
- (void)deleteHandShakeRTT;
- (void)deleteProtocol;
- (id)dictionaryRepresentation;
- (unsigned long long)handShakeDuration;
- (unsigned int)handShakeRTT;
- (bool)hasHandShakeDuration;
- (bool)hasHandShakeRTT;
- (bool)hasProtocol;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)protocol;
- (bool)readFrom:(id)arg1;
- (void)setHandShakeDuration:(unsigned long long)arg1;
- (void)setHandShakeRTT:(unsigned int)arg1;
- (void)setHasHandShakeDuration:(bool)arg1;
- (void)setHasHandShakeRTT:(bool)arg1;
- (void)setHasProtocol:(bool)arg1;
- (void)setProtocol:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
