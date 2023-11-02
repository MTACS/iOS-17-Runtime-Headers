
@interface PKPayLaterFinancingOptionInstallment : NSObject <NSCopying, NSSecureCoding> {
    PKPayLaterFinancingAmount * _dueAmount;
    NSDate * _dueDate;
}

@property (nonatomic, retain) PKPayLaterFinancingAmount *dueAmount;
@property (nonatomic, copy) NSDate *dueDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dueAmount;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDueAmount:(id)arg1;
- (void)setDueDate:(id)arg1;

@end
