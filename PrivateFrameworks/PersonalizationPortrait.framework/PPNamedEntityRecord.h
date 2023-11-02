
@interface PPNamedEntityRecord : NSObject <MLFeatureProvider, NSCopying, NSMutableCopying, NSSecureCoding, PPRecord> {
    unsigned char  _algorithm;
    BOOL  _bucketizedSentimentScore;
    unsigned char  _changeType;
    float  _decayRate;
    PPNamedEntity * _entity;
    unsigned int  _extractionAssetVersion;
    NSString * _extractionOsBuild;
    float  _initialScore;
    PPNamedEntityMetadata * _metadata;
    PPSource * _source;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) unsigned char changeType;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) PPNamedEntity *entity;
@property (nonatomic, readonly) unsigned int extractionAssetVersion;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) PPNamedEntityMetadata *metadata;
@property (nonatomic, readonly) double sentimentScore;
@property (nonatomic, readonly) PPSource *source;

+ (id)algorithmForName:(id)arg1;
+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (id)describeChangeType:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)algorithm;
- (unsigned char)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decayRate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (unsigned int)extractionAssetVersion;
- (id)extractionOsBuild;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)initialScore;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntityRecord:(id)arg1;
- (id)metadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)sentimentScore;
- (id)source;

@end
