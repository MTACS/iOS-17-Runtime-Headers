
@interface MHSchemaMHEndpointerTimeoutMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isTimeout : 1; 
        unsigned int timeoutThresholdInNs : 1; 
    }  _has;
    bool  _isTimeout;
    unsigned long long  _timeoutThresholdInNs;
}

@property (nonatomic) bool hasIsTimeout;
@property (nonatomic) bool hasTimeoutThresholdInNs;
@property (nonatomic) bool isTimeout;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long timeoutThresholdInNs;

- (void)deleteIsTimeout;
- (void)deleteTimeoutThresholdInNs;
- (id)dictionaryRepresentation;
- (bool)hasIsTimeout;
- (bool)hasTimeoutThresholdInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTimeout;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTimeout:(bool)arg1;
- (void)setHasTimeoutThresholdInNs:(bool)arg1;
- (void)setIsTimeout:(bool)arg1;
- (void)setTimeoutThresholdInNs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)timeoutThresholdInNs;
- (void)writeTo:(id)arg1;

@end
