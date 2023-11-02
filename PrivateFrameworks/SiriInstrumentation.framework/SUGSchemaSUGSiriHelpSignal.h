
@interface SUGSchemaSUGSiriHelpSignal : SISchemaInstrumentationMessage {
    unsigned int  _depthFromActiveSignal;
    struct { 
        unsigned int depthFromActiveSignal : 1; 
        unsigned int signalType : 1; 
    }  _has;
    bool  _hasSignalValue;
    int  _signalType;
    NSString * _signalValue;
}

@property (nonatomic) unsigned int depthFromActiveSignal;
@property (nonatomic) bool hasDepthFromActiveSignal;
@property (nonatomic) bool hasSignalType;
@property (nonatomic) bool hasSignalValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int signalType;
@property (nonatomic, copy) NSString *signalValue;

- (void).cxx_destruct;
- (void)deleteDepthFromActiveSignal;
- (void)deleteSignalType;
- (void)deleteSignalValue;
- (unsigned int)depthFromActiveSignal;
- (id)dictionaryRepresentation;
- (bool)hasDepthFromActiveSignal;
- (bool)hasSignalType;
- (bool)hasSignalValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDepthFromActiveSignal:(unsigned int)arg1;
- (void)setHasDepthFromActiveSignal:(bool)arg1;
- (void)setHasSignalType:(bool)arg1;
- (void)setHasSignalValue:(bool)arg1;
- (void)setSignalType:(int)arg1;
- (void)setSignalValue:(id)arg1;
- (int)signalType;
- (id)signalValue;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
