
@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration, NSSecureCoding> {
    NSSet * _cachedFeatureNames;
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSSet *cachedFeatureNames;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSSet *featureNames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedFeatureNames;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithFeatureProvider:(id)arg1;
- (id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2;
- (id)initWithFeatureValueDictionary:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setDictionary:(id)arg1;

@end
