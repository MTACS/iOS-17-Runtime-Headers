
@interface NETSchemaNETEstablishmentResolution : SISchemaInstrumentationMessage {
    unsigned long long  _duration;
    unsigned int  _endpointCount;
    struct { 
        unsigned int duration : 1; 
        unsigned int resolutionSource : 1; 
        unsigned int endpointCount : 1; 
    }  _has;
    bool  _hasPreferredEndpoint;
    bool  _hasSuccessfulEndpoint;
    NETSchemaNETEndpoint * _preferredEndpoint;
    unsigned int  _resolutionSource;
    NETSchemaNETEndpoint * _successfulEndpoint;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned int endpointCount;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndpointCount;
@property (nonatomic) bool hasPreferredEndpoint;
@property (nonatomic) bool hasResolutionSource;
@property (nonatomic) bool hasSuccessfulEndpoint;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NETSchemaNETEndpoint *preferredEndpoint;
@property (nonatomic) unsigned int resolutionSource;
@property (nonatomic, retain) NETSchemaNETEndpoint *successfulEndpoint;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDuration;
- (void)deleteEndpointCount;
- (void)deletePreferredEndpoint;
- (void)deleteResolutionSource;
- (void)deleteSuccessfulEndpoint;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned int)endpointCount;
- (bool)hasDuration;
- (bool)hasEndpointCount;
- (bool)hasPreferredEndpoint;
- (bool)hasResolutionSource;
- (bool)hasSuccessfulEndpoint;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)preferredEndpoint;
- (bool)readFrom:(id)arg1;
- (unsigned int)resolutionSource;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEndpointCount:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndpointCount:(bool)arg1;
- (void)setHasPreferredEndpoint:(bool)arg1;
- (void)setHasResolutionSource:(bool)arg1;
- (void)setHasSuccessfulEndpoint:(bool)arg1;
- (void)setPreferredEndpoint:(id)arg1;
- (void)setResolutionSource:(unsigned int)arg1;
- (void)setSuccessfulEndpoint:(id)arg1;
- (id)successfulEndpoint;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
