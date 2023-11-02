
@interface HKClinicalSharingSyncInfo : NSObject <NSSecureCoding> {
    NSSet * _accountIdentifiers;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSSet *accountIdentifiers;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 accountIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
