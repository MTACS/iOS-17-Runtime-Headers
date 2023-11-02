
@interface PKAccountBeneficiaryInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _beneficiaries;
}

@property (nonatomic, copy) NSArray *beneficiaries;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beneficiaries;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setBeneficiaries:(id)arg1;

@end
