
@interface NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage {
    NSArray * _connectionEstablishmentProtocols;
    unsigned long long  _durationInMs;
    struct { 
        unsigned int durationInMs : 1; 
    }  _has;
    bool  _hasProxyConfiguration;
    NETSchemaNETProxyConfiguration * _proxyConfiguration;
    NSArray * _resolutions;
}

@property (nonatomic, copy) NSArray *connectionEstablishmentProtocols;
@property (nonatomic) unsigned long long durationInMs;
@property (nonatomic) bool hasDurationInMs;
@property (nonatomic) bool hasProxyConfiguration;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NETSchemaNETProxyConfiguration *proxyConfiguration;
@property (nonatomic, copy) NSArray *resolutions;

- (void).cxx_destruct;
- (void)addConnectionEstablishmentProtocols:(id)arg1;
- (void)addResolution:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearConnectionEstablishmentProtocols;
- (void)clearResolution;
- (id)connectionEstablishmentProtocols;
- (id)connectionEstablishmentProtocolsAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionEstablishmentProtocolsCount;
- (void)deleteConnectionEstablishmentProtocols;
- (void)deleteDurationInMs;
- (void)deleteProxyConfiguration;
- (void)deleteResolution;
- (id)dictionaryRepresentation;
- (unsigned long long)durationInMs;
- (bool)hasDurationInMs;
- (bool)hasProxyConfiguration;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)proxyConfiguration;
- (bool)readFrom:(id)arg1;
- (id)resolutionAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolutionCount;
- (id)resolutions;
- (void)setConnectionEstablishmentProtocols:(id)arg1;
- (void)setDurationInMs:(unsigned long long)arg1;
- (void)setHasDurationInMs:(bool)arg1;
- (void)setHasProxyConfiguration:(bool)arg1;
- (void)setProxyConfiguration:(id)arg1;
- (void)setResolutions:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
