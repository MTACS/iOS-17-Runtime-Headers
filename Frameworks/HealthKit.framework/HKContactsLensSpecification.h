
@interface HKContactsLensSpecification : HKLensSpecification <NSCopying, NSSecureCoding> {
    HKQuantity * _baseCurve;
    HKQuantity * _diameter;
}

@property (nonatomic, readonly, copy) HKQuantity *baseCurve;
@property (nonatomic, readonly, copy) HKQuantity *diameter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseCurve;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diameter;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSphere:(id)arg1 cylinder:(id)arg2 axis:(id)arg3 addPower:(id)arg4 baseCurve:(id)arg5 diameter:(id)arg6;
- (bool)isEqual:(id)arg1;

@end
