
@interface _REConcreteFeature : REFeature {
    unsigned long long  _featureType;
    NSString * _name;
}

- (void).cxx_destruct;
- (long long)_bitCount;
- (id)_rootFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)featureType;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 featureType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
