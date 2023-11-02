
@interface MHSchemaMHEndpointLatencyInfoReported : SISchemaInstrumentationMessage {
    MHSchemaMHStatisticDistributionInfo * _coreSpeechTrailingPacketLatency;
    MHSchemaMHTrailingPacketLatencyInfo * _coreSpeechTrailingPacketLatencyInfo;
    unsigned long long  _firstPacketLatencyInNs;
    struct { 
        unsigned int firstPacketLatencyInNs : 1; 
    }  _has;
    bool  _hasCoreSpeechTrailingPacketLatency;
    bool  _hasCoreSpeechTrailingPacketLatencyInfo;
    bool  _hasTrailingPacketLatency;
    bool  _hasTrailingPacketLatencyInfo;
    MHSchemaMHStatisticDistributionInfo * _trailingPacketLatency;
    MHSchemaMHTrailingPacketLatencyInfo * _trailingPacketLatencyInfo;
}

@property (nonatomic, retain) MHSchemaMHStatisticDistributionInfo *coreSpeechTrailingPacketLatency;
@property (nonatomic, retain) MHSchemaMHTrailingPacketLatencyInfo *coreSpeechTrailingPacketLatencyInfo;
@property (nonatomic) unsigned long long firstPacketLatencyInNs;
@property (nonatomic) bool hasCoreSpeechTrailingPacketLatency;
@property (nonatomic) bool hasCoreSpeechTrailingPacketLatencyInfo;
@property (nonatomic) bool hasFirstPacketLatencyInNs;
@property (nonatomic) bool hasTrailingPacketLatency;
@property (nonatomic) bool hasTrailingPacketLatencyInfo;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MHSchemaMHStatisticDistributionInfo *trailingPacketLatency;
@property (nonatomic, retain) MHSchemaMHTrailingPacketLatencyInfo *trailingPacketLatencyInfo;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)coreSpeechTrailingPacketLatency;
- (id)coreSpeechTrailingPacketLatencyInfo;
- (void)deleteCoreSpeechTrailingPacketLatency;
- (void)deleteCoreSpeechTrailingPacketLatencyInfo;
- (void)deleteFirstPacketLatencyInNs;
- (void)deleteTrailingPacketLatency;
- (void)deleteTrailingPacketLatencyInfo;
- (id)dictionaryRepresentation;
- (unsigned long long)firstPacketLatencyInNs;
- (bool)hasCoreSpeechTrailingPacketLatency;
- (bool)hasCoreSpeechTrailingPacketLatencyInfo;
- (bool)hasFirstPacketLatencyInNs;
- (bool)hasTrailingPacketLatency;
- (bool)hasTrailingPacketLatencyInfo;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCoreSpeechTrailingPacketLatency:(id)arg1;
- (void)setCoreSpeechTrailingPacketLatencyInfo:(id)arg1;
- (void)setFirstPacketLatencyInNs:(unsigned long long)arg1;
- (void)setHasCoreSpeechTrailingPacketLatency:(bool)arg1;
- (void)setHasCoreSpeechTrailingPacketLatencyInfo:(bool)arg1;
- (void)setHasFirstPacketLatencyInNs:(bool)arg1;
- (void)setHasTrailingPacketLatency:(bool)arg1;
- (void)setHasTrailingPacketLatencyInfo:(bool)arg1;
- (void)setTrailingPacketLatency:(id)arg1;
- (void)setTrailingPacketLatencyInfo:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trailingPacketLatency;
- (id)trailingPacketLatencyInfo;
- (void)writeTo:(id)arg1;

@end
