
@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    float  _appAffinityScoreForPhoneCall;
    float  _appAffinityScoreForPhoneCallReceived;
    float  _appAffinityScoreForPhoneCallUsingSiri;
    struct { 
        unsigned int appAffinityScoreForPhoneCall : 1; 
        unsigned int appAffinityScoreForPhoneCallUsingSiri : 1; 
        unsigned int appAffinityScoreForPhoneCallReceived : 1; 
    }  _has;
}

@property (nonatomic) float appAffinityScoreForPhoneCall;
@property (nonatomic) float appAffinityScoreForPhoneCallReceived;
@property (nonatomic) float appAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) bool hasAppAffinityScoreForPhoneCall;
@property (nonatomic) bool hasAppAffinityScoreForPhoneCallReceived;
@property (nonatomic) bool hasAppAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic, readonly) NSData *jsonData;

- (float)appAffinityScoreForPhoneCall;
- (float)appAffinityScoreForPhoneCallReceived;
- (float)appAffinityScoreForPhoneCallUsingSiri;
- (void)deleteAppAffinityScoreForPhoneCall;
- (void)deleteAppAffinityScoreForPhoneCallReceived;
- (void)deleteAppAffinityScoreForPhoneCallUsingSiri;
- (id)dictionaryRepresentation;
- (bool)hasAppAffinityScoreForPhoneCall;
- (bool)hasAppAffinityScoreForPhoneCallReceived;
- (bool)hasAppAffinityScoreForPhoneCallUsingSiri;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppAffinityScoreForPhoneCall:(float)arg1;
- (void)setAppAffinityScoreForPhoneCallReceived:(float)arg1;
- (void)setAppAffinityScoreForPhoneCallUsingSiri:(float)arg1;
- (void)setHasAppAffinityScoreForPhoneCall:(bool)arg1;
- (void)setHasAppAffinityScoreForPhoneCallReceived:(bool)arg1;
- (void)setHasAppAffinityScoreForPhoneCallUsingSiri:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
