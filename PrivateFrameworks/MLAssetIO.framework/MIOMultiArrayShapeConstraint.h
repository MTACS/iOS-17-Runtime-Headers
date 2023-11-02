
@interface MIOMultiArrayShapeConstraint : NSObject {
    NSOrderedSet * _shapeSet;
    NSArray * _sizeRangeForDimension;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSArray *enumeratedShapes;
@property (nonatomic, readonly, copy) NSArray *sizeRangeForDimension;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enumeratedShapes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEnumeratedShapes:(id)arg1;
- (id)initWithSizeRangeForDimension:(id)arg1;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (id)sizeRangeForDimension;
- (long long)type;

@end
