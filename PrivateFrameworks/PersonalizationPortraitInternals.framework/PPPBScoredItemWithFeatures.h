
@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying> {
    NSMutableArray * _features;
    NSMutableArray * _feedbackItems;
    struct { 
        unsigned int topicId : 1; 
        unsigned int score : 1; 
    }  _has;
    NSString * _namedEntity;
    NSString * _namedEntityWithFeedback;
    float  _score;
    unsigned long long  _topicId;
}

@property (nonatomic, retain) NSMutableArray *features;
@property (nonatomic, retain) NSMutableArray *feedbackItems;
@property (nonatomic, readonly) bool hasNamedEntity;
@property (nonatomic, readonly) bool hasNamedEntityWithFeedback;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasTopicId;
@property (nonatomic, retain) NSString *namedEntity;
@property (nonatomic, retain) NSString *namedEntityWithFeedback;
@property (nonatomic) float score;
@property (nonatomic) unsigned long long topicId;

+ (Class)featuresType;
+ (Class)feedbackItemsType;

- (void).cxx_destruct;
- (void)addFeatures:(id)arg1;
- (void)addFeedbackItems:(id)arg1;
- (void)clearFeatures;
- (void)clearFeedbackItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)features;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (id)feedbackItems;
- (id)feedbackItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackItemsCount;
- (bool)hasNamedEntity;
- (bool)hasNamedEntityWithFeedback;
- (bool)hasScore;
- (bool)hasTopicId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedEntity;
- (id)namedEntityWithFeedback;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setFeatures:(id)arg1;
- (void)setFeedbackItems:(id)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasTopicId:(bool)arg1;
- (void)setNamedEntity:(id)arg1;
- (void)setNamedEntityWithFeedback:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setTopicId:(unsigned long long)arg1;
- (unsigned long long)topicId;
- (void)writeTo:(id)arg1;

@end
