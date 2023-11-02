
@interface VNPersonsModelAlgorithmVIPv3 : VNPersonsModelAlgorithm {
    long long  _indexType;
}

@property long long indexType;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)faceModelClass;
- (long long)indexType;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setIndexType:(long long)arg1;

@end
