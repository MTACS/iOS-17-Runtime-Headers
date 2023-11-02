
@interface MHSchemaMHUserEngagementAggregatedStats : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mitigationType : 1; 
        unsigned int requestCount : 1; 
        unsigned int intendedRequestCount : 1; 
        unsigned int unintendedRequestCount : 1; 
        unsigned int intendedRequestRatio : 1; 
        unsigned int triggeredMechanismRequestRatio : 1; 
    }  _has;
    bool  _hasModelVersion;
    int  _intendedRequestCount;
    double  _intendedRequestRatio;
    int  _mitigationType;
    NSString * _modelVersion;
    int  _requestCount;
    double  _triggeredMechanismRequestRatio;
    int  _unintendedRequestCount;
}

@property (nonatomic) bool hasIntendedRequestCount;
@property (nonatomic) bool hasIntendedRequestRatio;
@property (nonatomic) bool hasMitigationType;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasRequestCount;
@property (nonatomic) bool hasTriggeredMechanismRequestRatio;
@property (nonatomic) bool hasUnintendedRequestCount;
@property (nonatomic) int intendedRequestCount;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mitigationType;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic) int requestCount;
@property (nonatomic) double triggeredMechanismRequestRatio;
@property (nonatomic) int unintendedRequestCount;

- (void).cxx_destruct;
- (void)deleteIntendedRequestCount;
- (void)deleteIntendedRequestRatio;
- (void)deleteMitigationType;
- (void)deleteModelVersion;
- (void)deleteRequestCount;
- (void)deleteTriggeredMechanismRequestRatio;
- (void)deleteUnintendedRequestCount;
- (id)dictionaryRepresentation;
- (bool)hasIntendedRequestCount;
- (bool)hasIntendedRequestRatio;
- (bool)hasMitigationType;
- (bool)hasModelVersion;
- (bool)hasRequestCount;
- (bool)hasTriggeredMechanismRequestRatio;
- (bool)hasUnintendedRequestCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)intendedRequestCount;
- (double)intendedRequestRatio;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mitigationType;
- (id)modelVersion;
- (bool)readFrom:(id)arg1;
- (int)requestCount;
- (void)setHasIntendedRequestCount:(bool)arg1;
- (void)setHasIntendedRequestRatio:(bool)arg1;
- (void)setHasMitigationType:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasRequestCount:(bool)arg1;
- (void)setHasTriggeredMechanismRequestRatio:(bool)arg1;
- (void)setHasUnintendedRequestCount:(bool)arg1;
- (void)setIntendedRequestCount:(int)arg1;
- (void)setIntendedRequestRatio:(double)arg1;
- (void)setMitigationType:(int)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setRequestCount:(int)arg1;
- (void)setTriggeredMechanismRequestRatio:(double)arg1;
- (void)setUnintendedRequestCount:(int)arg1;
- (id)suppressMessageUnderConditions;
- (double)triggeredMechanismRequestRatio;
- (int)unintendedRequestCount;
- (void)writeTo:(id)arg1;

@end
