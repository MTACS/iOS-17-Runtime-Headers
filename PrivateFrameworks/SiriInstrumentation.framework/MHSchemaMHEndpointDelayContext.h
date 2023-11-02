
@interface MHSchemaMHEndpointDelayContext : SISchemaInstrumentationMessage {
    unsigned long long  _endpointDelayInNs;
    unsigned long long  _endpointModelDelayInNs;
    struct { 
        unsigned int speakingStartInNs : 1; 
        unsigned int speakingEndInNs : 1; 
        unsigned int endpointDelayInNs : 1; 
        unsigned int endpointModelDelayInNs : 1; 
    }  _has;
    unsigned long long  _speakingEndInNs;
    unsigned long long  _speakingStartInNs;
}

@property (nonatomic) unsigned long long endpointDelayInNs;
@property (nonatomic) unsigned long long endpointModelDelayInNs;
@property (nonatomic) bool hasEndpointDelayInNs;
@property (nonatomic) bool hasEndpointModelDelayInNs;
@property (nonatomic) bool hasSpeakingEndInNs;
@property (nonatomic) bool hasSpeakingStartInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long speakingEndInNs;
@property (nonatomic) unsigned long long speakingStartInNs;

- (void)deleteEndpointDelayInNs;
- (void)deleteEndpointModelDelayInNs;
- (void)deleteSpeakingEndInNs;
- (void)deleteSpeakingStartInNs;
- (id)dictionaryRepresentation;
- (unsigned long long)endpointDelayInNs;
- (unsigned long long)endpointModelDelayInNs;
- (bool)hasEndpointDelayInNs;
- (bool)hasEndpointModelDelayInNs;
- (bool)hasSpeakingEndInNs;
- (bool)hasSpeakingStartInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEndpointDelayInNs:(unsigned long long)arg1;
- (void)setEndpointModelDelayInNs:(unsigned long long)arg1;
- (void)setHasEndpointDelayInNs:(bool)arg1;
- (void)setHasEndpointModelDelayInNs:(bool)arg1;
- (void)setHasSpeakingEndInNs:(bool)arg1;
- (void)setHasSpeakingStartInNs:(bool)arg1;
- (void)setSpeakingEndInNs:(unsigned long long)arg1;
- (void)setSpeakingStartInNs:(unsigned long long)arg1;
- (unsigned long long)speakingEndInNs;
- (unsigned long long)speakingStartInNs;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
