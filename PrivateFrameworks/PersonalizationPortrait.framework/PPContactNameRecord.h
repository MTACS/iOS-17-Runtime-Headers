
@interface PPContactNameRecord : NSObject <NSCopying, NSSecureCoding>

+ (id)describeChangeType:(unsigned char)arg1;
+ (id)describeSource:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (unsigned char)changeType;
- (id)cityNames;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17;
- (id)init_;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactNameRecord:(id)arg1;
- (id)jobTitle;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (double)score;
- (unsigned char)source;
- (id)sourceIdentifier;
- (id)streetNames;

@end
