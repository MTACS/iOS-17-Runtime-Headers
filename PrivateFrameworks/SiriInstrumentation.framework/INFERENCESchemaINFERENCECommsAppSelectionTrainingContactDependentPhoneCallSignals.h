
@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    float  _appContactAffinityScoreForPhoneCall;
    float  _appContactAffinityScoreForPhoneCallReceived;
    float  _appContactAffinityScoreForPhoneCallUsingSiri;
    struct { 
        unsigned int appContactAffinityScoreForPhoneCall : 1; 
        unsigned int appContactAffinityScoreForPhoneCallUsingSiri : 1; 
        unsigned int appContactAffinityScoreForPhoneCallReceived : 1; 
    }  _has;
}

@property (nonatomic) float appContactAffinityScoreForPhoneCall;
@property (nonatomic) float appContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) float appContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) bool hasAppContactAffinityScoreForPhoneCall;
@property (nonatomic) bool hasAppContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) bool hasAppContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic, readonly) NSData *jsonData;

- (float)appContactAffinityScoreForPhoneCall;
- (float)appContactAffinityScoreForPhoneCallReceived;
- (float)appContactAffinityScoreForPhoneCallUsingSiri;
- (void)deleteAppContactAffinityScoreForPhoneCall;
- (void)deleteAppContactAffinityScoreForPhoneCallReceived;
- (void)deleteAppContactAffinityScoreForPhoneCallUsingSiri;
- (id)dictionaryRepresentation;
- (bool)hasAppContactAffinityScoreForPhoneCall;
- (bool)hasAppContactAffinityScoreForPhoneCallReceived;
- (bool)hasAppContactAffinityScoreForPhoneCallUsingSiri;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppContactAffinityScoreForPhoneCall:(float)arg1;
- (void)setAppContactAffinityScoreForPhoneCallReceived:(float)arg1;
- (void)setAppContactAffinityScoreForPhoneCallUsingSiri:(float)arg1;
- (void)setHasAppContactAffinityScoreForPhoneCall:(bool)arg1;
- (void)setHasAppContactAffinityScoreForPhoneCallReceived:(bool)arg1;
- (void)setHasAppContactAffinityScoreForPhoneCallUsingSiri:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
