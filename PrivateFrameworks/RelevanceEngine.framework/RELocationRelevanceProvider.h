
@interface RELocationRelevanceProvider : RERelevanceProvider {
    double  _accuracy;
    NSString * _bundleIdentifier;
    CLLocation * _location;
    double  _radius;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) unsigned long long type;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (double)accuracy;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocation:(id)arg1 radius:(double)arg2;
- (id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3;
- (id)initWithLocationType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)providerWithBundleIdentifier:(id)arg1;
- (double)radius;
- (unsigned long long)type;

@end
