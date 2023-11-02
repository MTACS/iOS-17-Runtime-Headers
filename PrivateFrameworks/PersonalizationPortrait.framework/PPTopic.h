
@interface PPTopic : NSObject <MLFeatureProvider, NSCopying, NSSecureCoding> {
    NSString * _clusterIdentifier;
    NSString * _topicIdentifier;
}

@property (nonatomic, readonly) NSString *clusterIdentifier;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) PPTopicRecord *mostRelevantRecord;
@property (nonatomic, readonly) double sentimentScore;
@property (nonatomic, readonly) NSString *topicIdentifier;

+ (id)clusterIdentifierFromTopicId:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clusterIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1;
- (id)initWithTopicIdentifier:(id)arg1;
- (id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTopic:(id)arg1;
- (id)mostRelevantRecord;
- (double)sentimentScore;
- (id)topicIdentifier;

@end
