
@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {
    long long  _dataType;
    NSArray * _shape;
    MLMultiArrayShapeConstraint * _shapeConstraint;
}

@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) MLMultiArrayShapeConstraint *shapeConstraint;

+ (id)constraintWithShape:(id)arg1 dataType:(long long)arg2;
+ (id)constraintWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3;
- (bool)isAllowedDataType:(long long)arg1 error:(id*)arg2;
- (bool)isAllowedShape:(id)arg1 error:(id*)arg2;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (bool)isAllowedValue:(id)arg1 isNeuralNetworkInputOrOutput:(bool)arg2 usingRank5Mapping:(bool)arg3 featureName:(id)arg4 error:(id*)arg5;
- (id)shape;
- (id)shapeConstraint;

@end
