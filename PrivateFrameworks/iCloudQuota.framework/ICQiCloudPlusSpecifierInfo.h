
@interface ICQiCloudPlusSpecifierInfo : ICQSpecifierInfo <NSCopying, NSSecureCoding> {
    NSArray * _featureList;
}

@property (nonatomic, retain) NSArray *featureList;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureList;
- (id)initWithCoder:(id)arg1;
- (void)setFeatureList:(id)arg1;

@end
