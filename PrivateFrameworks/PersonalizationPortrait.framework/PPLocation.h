
@interface PPLocation : NSObject <MLFeatureProvider, NSCopying, NSSecureCoding> {
    unsigned short  _category;
    NSString * _clusterIdentifier;
    PPLocationRecord * _mostRelevantRecord;
    CLPlacemark * _placemark;
}

@property (nonatomic, readonly) unsigned short category;
@property (nonatomic, readonly) NSString *clusterIdentifier;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) PPLocationRecord *mostRelevantRecord;
@property (nonatomic, readonly) CLPlacemark *placemark;

+ (unsigned short)categoryForDescription:(id)arg1;
+ (id)clusterIdentifierFromPlacemark:(id)arg1;
+ (id)describeCategory:(unsigned short)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)category;
- (id)clusterIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customizedDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (id)mostRelevantRecord;
- (id)placemark;

@end
