
@interface MLMultiArrayShapeConstraint : NSObject <NSSecureCoding> {
    NSOrderedSet * _shapeSet;
    NSArray * _sizeRangeForDimension;
    long long  _type;
}

@property (nonatomic, readonly) NSArray *enumeratedShapes;
@property (nonatomic, readonly) NSOrderedSet *shapeSet;
@property (nonatomic, readonly) NSArray *sizeRangeForDimension;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratedShapes;
- (id)findAvailableShape:(id)arg1;
- (id)initUnspecified;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnumeratedShapes:(id)arg1;
- (id)initWithSizeRangeForDimension:(id)arg1;
- (bool)isAllowedShape:(id)arg1 error:(id*)arg2;
- (id)shapeSet;
- (id)sizeRangeForDimension;
- (long long)type;

@end
