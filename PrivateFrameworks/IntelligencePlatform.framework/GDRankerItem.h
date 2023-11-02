
@interface GDRankerItem : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    double  _contextualScore;
    NSString * _entityClass;
    GDEntityIdentifier * _entityID;
    double  _entityRelevance;
    NSNumber * _entityRelevanceInferenceEventId;
    GDEntityFeatures * _features;
    double  _nameScore;
    double  _score;
    GDEntitySourceID * _sourceID;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double contextualScore;
@property (nonatomic, readonly, copy) NSString *entityClass;
@property (nonatomic, readonly, copy) GDEntityIdentifier *entityID;
@property (nonatomic, readonly) double entityRelevance;
@property (nonatomic, readonly) NSNumber *entityRelevanceInferenceEventId;
@property (nonatomic, readonly, copy) GDEntityFeatures *features;
@property (nonatomic, readonly) double nameScore;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly, copy) GDEntitySourceID *sourceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (double)contextualScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityClass;
- (id)entityID;
- (double)entityRelevance;
- (id)entityRelevanceInferenceEventId;
- (id)features;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityID:(id)arg1 score:(double)arg2;
- (id)initWithEntityID:(id)arg1 sourceID:(id)arg2 entityClass:(id)arg3 features:(id)arg4 score:(double)arg5;
- (id)initWithEntityID:(id)arg1 sourceID:(id)arg2 entityClass:(id)arg3 features:(id)arg4 score:(double)arg5 nameScore:(double)arg6 contextualScore:(double)arg7 entityRelevance:(double)arg8 entityRelevanceInferenceEventId:(id)arg9;
- (double)nameScore;
- (double)score;
- (id)sourceID;

@end
