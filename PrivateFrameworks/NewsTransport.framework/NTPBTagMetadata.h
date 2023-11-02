
@interface NTPBTagMetadata : PBCodable <NSCopying> {
    NTPBContentAndRelevanceInfo * _contentAndRelevanceInfo;
    float  _flowRate;
    struct { 
        unsigned int flowRate : 1; 
        unsigned int ontologyLevel : 1; 
        unsigned int quality : 1; 
        unsigned int subscriptionRate : 1; 
    }  _has;
    int  _ontologyLevel;
    float  _quality;
    float  _subscriptionRate;
}

@property (nonatomic, retain) NTPBContentAndRelevanceInfo *contentAndRelevanceInfo;
@property (nonatomic) float flowRate;
@property (nonatomic, readonly) bool hasContentAndRelevanceInfo;
@property (nonatomic) bool hasFlowRate;
@property (nonatomic) bool hasOntologyLevel;
@property (nonatomic) bool hasQuality;
@property (nonatomic) bool hasSubscriptionRate;
@property (nonatomic) int ontologyLevel;
@property (nonatomic) float quality;
@property (nonatomic) float subscriptionRate;

- (void).cxx_destruct;
- (id)contentAndRelevanceInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)flowRate;
- (bool)hasContentAndRelevanceInfo;
- (bool)hasFlowRate;
- (bool)hasOntologyLevel;
- (bool)hasQuality;
- (bool)hasSubscriptionRate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)ontologyLevel;
- (float)quality;
- (bool)readFrom:(id)arg1;
- (void)setContentAndRelevanceInfo:(id)arg1;
- (void)setFlowRate:(float)arg1;
- (void)setHasFlowRate:(bool)arg1;
- (void)setHasOntologyLevel:(bool)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setHasSubscriptionRate:(bool)arg1;
- (void)setOntologyLevel:(int)arg1;
- (void)setQuality:(float)arg1;
- (void)setSubscriptionRate:(float)arg1;
- (float)subscriptionRate;
- (void)writeTo:(id)arg1;

@end
