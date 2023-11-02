
@interface PPNamedEntity : NSObject <MLFeatureProvider, NSCopying, NSSecureCoding> {
    NSString * _bestLanguage;
    unsigned long long  _category;
    NSString * _clusterIdentifier;
    NSString * _dynamicCategory;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *bestLanguage;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) NSString *clusterIdentifier;
@property (nonatomic, readonly) NSString *dynamicCategory;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) PPNamedEntityRecord *mostRelevantRecord;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double sentimentScore;

+ (unsigned long long)categoryForDescription:(id)arg1;
+ (id)clusterIdentifierFromName:(id)arg1;
+ (id)describeCategory:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestLanguage;
- (unsigned long long)category;
- (id)clusterIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dynamicCategory;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4 mostRelevantRecord:(id)arg5;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntity:(id)arg1;
- (id)mostRelevantRecord;
- (id)name;
- (double)sentimentScore;

@end
