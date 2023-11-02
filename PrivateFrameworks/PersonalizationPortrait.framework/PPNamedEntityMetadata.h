
@interface PPNamedEntityMetadata : NSObject <MLFeatureProvider, NSCopying, NSSecureCoding> {
    unsigned short  _impressionCount;
    unsigned short  _occurrencesInSource;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) unsigned short impressionCount;
@property (nonatomic, readonly) unsigned short occurrencesInSource;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)hash;
- (unsigned short)impressionCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntityMetadata:(id)arg1;
- (unsigned short)occurrencesInSource;

@end
