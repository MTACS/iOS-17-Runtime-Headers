
@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _countRange;
    MLFeatureDescription * _valueDescription;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } countRange;
@property (nonatomic, readonly) MLFeatureDescription *valueDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })countRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValueDescription:(id)arg1 countRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (id)valueDescription;

@end
