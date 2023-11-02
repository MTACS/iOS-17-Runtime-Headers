
@interface PeoplePredictionDataMLSEShareEvent : PBCodable <NSCopying> {
    int  _engagementType;
    PeoplePredictionDataFeaturizationConfig * _featurizationConfig;
    NSMutableArray * _featurizedCandidates;
    struct { 
        unsigned int engagementType : 1; 
    }  _has;
    NSString * _sessionId;
    PeoplePredictionDataTrialIdentifier * _trialIdentifier;
}

@property (nonatomic) int engagementType;
@property (nonatomic, retain) PeoplePredictionDataFeaturizationConfig *featurizationConfig;
@property (nonatomic, retain) NSMutableArray *featurizedCandidates;
@property (nonatomic) bool hasEngagementType;
@property (nonatomic, readonly) bool hasFeaturizationConfig;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic, readonly) bool hasTrialIdentifier;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) PeoplePredictionDataTrialIdentifier *trialIdentifier;

+ (Class)featurizedCandidateType;

- (void).cxx_destruct;
- (int)StringAsEngagementType:(id)arg1;
- (void)addFeaturizedCandidate:(id)arg1;
- (void)clearFeaturizedCandidates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engagementType;
- (id)engagementTypeAsString:(int)arg1;
- (id)featurizationConfig;
- (id)featurizedCandidateAtIndex:(unsigned long long)arg1;
- (id)featurizedCandidates;
- (unsigned long long)featurizedCandidatesCount;
- (bool)hasEngagementType;
- (bool)hasFeaturizationConfig;
- (bool)hasSessionId;
- (bool)hasTrialIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setEngagementType:(int)arg1;
- (void)setFeaturizationConfig:(id)arg1;
- (void)setFeaturizedCandidates:(id)arg1;
- (void)setHasEngagementType:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTrialIdentifier:(id)arg1;
- (id)trialIdentifier;
- (void)writeTo:(id)arg1;

@end
