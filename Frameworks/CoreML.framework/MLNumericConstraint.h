
@interface MLNumericConstraint : NSObject <NSSecureCoding> {
    NSSet * _enumeratedNumbers;
    NSNumber * _maxNumber;
    NSNumber * _minNumber;
}

@property (nonatomic, retain) NSSet *enumeratedNumbers;
@property (nonatomic, retain) NSNumber *maxNumber;
@property (nonatomic, retain) NSNumber *minNumber;

+ (id)numericConstraintWithEnumeratedNumbers:(id)arg1;
+ (id)numericConstraintWithMinNumber:(id)arg1 maxNumber:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratedNumbers;
- (id)initWithCoder:(id)arg1;
- (id)maxNumber;
- (id)minNumber;
- (void)setEnumeratedNumbers:(id)arg1;
- (void)setMaxNumber:(id)arg1;
- (void)setMinNumber:(id)arg1;

@end
