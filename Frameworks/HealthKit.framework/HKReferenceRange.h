
@interface HKReferenceRange : NSObject <NSCopying, NSSecureCoding> {
    NSString * _referenceRangeIdentifier;
    HKInspectableValueCollection * _valueRange;
}

@property (nonatomic, readonly) NSString *referenceRangeIdentifier;
@property (nonatomic, readonly) HKInspectableValueCollection *valueRange;

+ (id)referenceRangeWithIdentifier:(id)arg1 inspectableValueRange:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 maxValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2;
+ (id)referenceRangeWithIdentifier:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)referenceRangeIdentifier;
- (id)valueRange;

@end
