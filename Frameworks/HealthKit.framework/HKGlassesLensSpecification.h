
@interface HKGlassesLensSpecification : HKLensSpecification <NSCopying, NSSecureCoding> {
    HKQuantity * _farPupillaryDistance;
    HKQuantity * _nearPupillaryDistance;
    HKVisionPrism * _prism;
    HKQuantity * _vertexDistance;
}

@property (nonatomic, readonly, copy) HKQuantity *farPupillaryDistance;
@property (nonatomic, readonly, copy) HKQuantity *nearPupillaryDistance;
@property (nonatomic, readonly, copy) HKVisionPrism *prism;
@property (nonatomic, readonly, copy) HKQuantity *vertexDistance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)farPupillaryDistance;
- (id)initWithCoder:(id)arg1;
- (id)initWithSphere:(id)arg1 cylinder:(id)arg2 axis:(id)arg3 addPower:(id)arg4 vertexDistance:(id)arg5 prism:(id)arg6 farPupillaryDistance:(id)arg7 nearPupillaryDistance:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)nearPupillaryDistance;
- (id)prism;
- (id)vertexDistance;

@end
