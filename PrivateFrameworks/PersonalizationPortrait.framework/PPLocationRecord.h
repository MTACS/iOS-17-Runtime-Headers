
@interface PPLocationRecord : NSObject <MLFeatureProvider, NSCopying, NSMutableCopying, NSSecureCoding, PPRecord> {
    unsigned char  _algorithm;
    BOOL  _bucketizedSentimentScore;
    NSArray * _contextualNamedEntities;
    float  _decayRate;
    unsigned int  _extractionAssetVersion;
    NSString * _extractionOsBuild;
    float  _initialScore;
    bool  _isAmbiguous;
    PPLocation * _location;
    PPSource * _source;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned short algorithm;
@property (nonatomic, readonly) NSArray *contextualNamedEntities;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) unsigned int extractionAssetVersion;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) bool isAmbiguous;
@property (nonatomic, readonly) PPLocation *location;
@property (nonatomic, readonly) double sentimentScore;
@property (nonatomic, readonly) PPSource *source;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)algorithmForName:(id)arg1;
+ (id)describeAlgorithm:(unsigned short)arg1;
+ (id)sharedAmbiguousRecord;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)algorithm;
- (id)contextualNamedEntities;
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
- (id)init;
- (id)initAmbiguousRecord;
- (id)initWithCoder:(id)arg1;
- (id)init_;
- (double)initialScore;
- (bool)isAmbiguous;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocationRecord:(id)arg1;
- (id)location;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)sentimentScore;
- (id)source;
- (void)supplementFieldsWithClusterID:(id)arg1 locationWithLatLong:(id)arg2;
- (id)uuid;

@end
