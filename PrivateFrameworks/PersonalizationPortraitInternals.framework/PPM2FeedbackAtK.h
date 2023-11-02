
@interface PPM2FeedbackAtK : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    unsigned int  _bucket;
    int  _domain;
    unsigned int  _evaluatedCount;
    int  _feedbackType;
    struct { 
        unsigned int bucket : 1; 
        unsigned int domain : 1; 
        unsigned int evaluatedCount : 1; 
        unsigned int feedbackType : 1; 
        unsigned int k : 1; 
    }  _has;
    unsigned int  _k;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) unsigned int bucket;
@property (nonatomic) int domain;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) int feedbackType;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasBucket;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasEvaluatedCount;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic) bool hasK;
@property (nonatomic) unsigned int k;

- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (int)StringAsFeedbackType:(id)arg1;
- (id)activeTreatments;
- (unsigned int)bucket;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (unsigned int)evaluatedCount;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (bool)hasActiveTreatments;
- (bool)hasBucket;
- (bool)hasDomain;
- (bool)hasEvaluatedCount;
- (bool)hasFeedbackType;
- (bool)hasK;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)k;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setBucket:(unsigned int)arg1;
- (void)setDomain:(int)arg1;
- (void)setEvaluatedCount:(unsigned int)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasBucket:(bool)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasEvaluatedCount:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setHasK:(bool)arg1;
- (void)setK:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
