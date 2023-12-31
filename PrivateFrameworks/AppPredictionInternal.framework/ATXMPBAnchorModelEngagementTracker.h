
@interface ATXMPBAnchorModelEngagementTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    double  _anchorPopularity;
    NSString * _anchorType;
    NSString * _candidateType;
    double  _classConditionalProbability;
    NSString * _consumerSubType;
    int  _engagementType;
    NSString * _executableObject;
    double  _globalPopularity;
    struct { 
        unsigned int anchorPopularity : 1; 
        unsigned int classConditionalProbability : 1; 
        unsigned int globalPopularity : 1; 
        unsigned int posteriorProbability : 1; 
        unsigned int score : 1; 
        unsigned int standardDeviationOfOffsetFromAnchor : 1; 
        unsigned int engagementType : 1; 
        unsigned int numPredictionsforAnchor : 1; 
        unsigned int numUniqueOccurrencesAfterAnchor : 1; 
        unsigned int secondsAfterAnchor : 1; 
    }  _has;
    unsigned int  _numPredictionsforAnchor;
    unsigned int  _numUniqueOccurrencesAfterAnchor;
    double  _posteriorProbability;
    double  _score;
    unsigned int  _secondsAfterAnchor;
    double  _standardDeviationOfOffsetFromAnchor;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) double anchorPopularity;
@property (nonatomic, retain) NSString *anchorType;
@property (nonatomic, retain) NSString *candidateType;
@property (nonatomic) double classConditionalProbability;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic) int engagementType;
@property (nonatomic, retain) NSString *executableObject;
@property (nonatomic) double globalPopularity;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasAnchorPopularity;
@property (nonatomic, readonly) bool hasAnchorType;
@property (nonatomic, readonly) bool hasCandidateType;
@property (nonatomic) bool hasClassConditionalProbability;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasEngagementType;
@property (nonatomic, readonly) bool hasExecutableObject;
@property (nonatomic) bool hasGlobalPopularity;
@property (nonatomic) bool hasNumPredictionsforAnchor;
@property (nonatomic) bool hasNumUniqueOccurrencesAfterAnchor;
@property (nonatomic) bool hasPosteriorProbability;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasSecondsAfterAnchor;
@property (nonatomic) bool hasStandardDeviationOfOffsetFromAnchor;
@property (nonatomic) unsigned int numPredictionsforAnchor;
@property (nonatomic) unsigned int numUniqueOccurrencesAfterAnchor;
@property (nonatomic) double posteriorProbability;
@property (nonatomic) double score;
@property (nonatomic) unsigned int secondsAfterAnchor;
@property (nonatomic) double standardDeviationOfOffsetFromAnchor;

- (void).cxx_destruct;
- (int)StringAsEngagementType:(id)arg1;
- (id)abGroup;
- (double)anchorPopularity;
- (id)anchorType;
- (id)candidateType;
- (double)classConditionalProbability;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engagementType;
- (id)engagementTypeAsString:(int)arg1;
- (id)executableObject;
- (double)globalPopularity;
- (bool)hasAbGroup;
- (bool)hasAnchorPopularity;
- (bool)hasAnchorType;
- (bool)hasCandidateType;
- (bool)hasClassConditionalProbability;
- (bool)hasConsumerSubType;
- (bool)hasEngagementType;
- (bool)hasExecutableObject;
- (bool)hasGlobalPopularity;
- (bool)hasNumPredictionsforAnchor;
- (bool)hasNumUniqueOccurrencesAfterAnchor;
- (bool)hasPosteriorProbability;
- (bool)hasScore;
- (bool)hasSecondsAfterAnchor;
- (bool)hasStandardDeviationOfOffsetFromAnchor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numPredictionsforAnchor;
- (unsigned int)numUniqueOccurrencesAfterAnchor;
- (double)posteriorProbability;
- (bool)readFrom:(id)arg1;
- (double)score;
- (unsigned int)secondsAfterAnchor;
- (void)setAbGroup:(id)arg1;
- (void)setAnchorPopularity:(double)arg1;
- (void)setAnchorType:(id)arg1;
- (void)setCandidateType:(id)arg1;
- (void)setClassConditionalProbability:(double)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setEngagementType:(int)arg1;
- (void)setExecutableObject:(id)arg1;
- (void)setGlobalPopularity:(double)arg1;
- (void)setHasAnchorPopularity:(bool)arg1;
- (void)setHasClassConditionalProbability:(bool)arg1;
- (void)setHasEngagementType:(bool)arg1;
- (void)setHasGlobalPopularity:(bool)arg1;
- (void)setHasNumPredictionsforAnchor:(bool)arg1;
- (void)setHasNumUniqueOccurrencesAfterAnchor:(bool)arg1;
- (void)setHasPosteriorProbability:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasSecondsAfterAnchor:(bool)arg1;
- (void)setHasStandardDeviationOfOffsetFromAnchor:(bool)arg1;
- (void)setNumPredictionsforAnchor:(unsigned int)arg1;
- (void)setNumUniqueOccurrencesAfterAnchor:(unsigned int)arg1;
- (void)setPosteriorProbability:(double)arg1;
- (void)setScore:(double)arg1;
- (void)setSecondsAfterAnchor:(unsigned int)arg1;
- (void)setStandardDeviationOfOffsetFromAnchor:(double)arg1;
- (double)standardDeviationOfOffsetFromAnchor;
- (void)writeTo:(id)arg1;

@end
