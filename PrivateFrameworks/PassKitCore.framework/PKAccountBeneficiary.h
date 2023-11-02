
@interface PKAccountBeneficiary : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _allocation;
    CNContact * _contact;
}

@property (nonatomic, copy) NSDecimalNumber *allocation;
@property (nonatomic, copy) CNContact *contact;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allocation;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setAllocation:(id)arg1;
- (void)setContact:(id)arg1;

@end
