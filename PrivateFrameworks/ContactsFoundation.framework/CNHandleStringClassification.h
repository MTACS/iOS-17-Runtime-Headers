
@interface CNHandleStringClassification : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _emailAddresses;
    NSArray * _phoneNumbers;
    NSArray * _unknown;
}

@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSArray *phoneNumbers;
@property (nonatomic, readonly, copy) NSArray *unknown;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBuilder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 unknown:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)phoneNumbers;
- (id)unknown;

@end
