
@interface PPTopicRecord : NSObject <MLFeatureProvider, NSCopying, NSMutableCopying, NSSecureCoding, PPRecord> {
    unsigned long long  _algorithm;
    BOOL  _bucketizedSentimentScore;
    double  _decayRate;
    unsigned int  _extractionAssetVersion;
    NSString * _extractionOsBuild;
    double  _initialScore;
    bool  _isLocal;
    PPTopicMetadata * _metadata;
    PPSource * _source;
    PPTopic * _topic;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) unsigned int extractionAssetVersion;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) PPTopicMetadata *metadata;
@property (nonatomic, readonly) double sentimentScore;
@property (nonatomic, readonly) PPSource *source;
@property (nonatomic, readonly) PPTopic *topic;

+ (id)algorithmForName:(id)arg1;
+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decayRate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)extractionAssetVersion;
- (id)extractionOsBuild;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)initialScore;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTopicRecord:(id)arg1;
- (bool)isLocal;
- (id)metadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)sentimentScore;
- (id)source;
- (id)topic;

@end
