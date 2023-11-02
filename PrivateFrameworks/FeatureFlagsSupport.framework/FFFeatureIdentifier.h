
@interface FFFeatureIdentifier : NSObject <NSCopying> {
    NSString * _domainName;
    NSString * _featureName;
}

@property (nonatomic, readonly) NSString *domainName;
@property (nonatomic, readonly) NSString *featureName;

+ (id)identifierFromString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainName;
- (id)featureName;
- (unsigned long long)hash;
- (id)initWithDomain:(id)arg1 feature:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
