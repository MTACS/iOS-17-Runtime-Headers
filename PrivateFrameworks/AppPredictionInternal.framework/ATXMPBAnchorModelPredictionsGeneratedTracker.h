
@interface ATXMPBAnchorModelPredictionsGeneratedTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _anchorType;
    NSString * _candidateType;
    NSString * _executableObject;
    struct { 
        unsigned int score : 1; 
        unsigned int secondsAfterAnchorEnd : 1; 
        unsigned int secondsAfterAnchorStart : 1; 
    }  _has;
    double  _score;
    int  _secondsAfterAnchorEnd;
    int  _secondsAfterAnchorStart;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *anchorType;
@property (nonatomic, retain) NSString *candidateType;
@property (nonatomic, retain) NSString *executableObject;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasAnchorType;
@property (nonatomic, readonly) bool hasCandidateType;
@property (nonatomic, readonly) bool hasExecutableObject;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasSecondsAfterAnchorEnd;
@property (nonatomic) bool hasSecondsAfterAnchorStart;
@property (nonatomic) double score;
@property (nonatomic) int secondsAfterAnchorEnd;
@property (nonatomic) int secondsAfterAnchorStart;

- (void).cxx_destruct;
- (id)abGroup;
- (id)anchorType;
- (id)candidateType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executableObject;
- (bool)hasAbGroup;
- (bool)hasAnchorType;
- (bool)hasCandidateType;
- (bool)hasExecutableObject;
- (bool)hasScore;
- (bool)hasSecondsAfterAnchorEnd;
- (bool)hasSecondsAfterAnchorStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (int)secondsAfterAnchorEnd;
- (int)secondsAfterAnchorStart;
- (void)setAbGroup:(id)arg1;
- (void)setAnchorType:(id)arg1;
- (void)setCandidateType:(id)arg1;
- (void)setExecutableObject:(id)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasSecondsAfterAnchorEnd:(bool)arg1;
- (void)setHasSecondsAfterAnchorStart:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setSecondsAfterAnchorEnd:(int)arg1;
- (void)setSecondsAfterAnchorStart:(int)arg1;
- (void)writeTo:(id)arg1;

@end
