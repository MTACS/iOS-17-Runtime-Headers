
@interface HKVerifiableClinicalRecordSubject : NSObject <NSCopying, NSSecureCoding> {
    NSDateComponents * _dateOfBirthComponents;
    NSString * _fullName;
}

@property (readonly, copy) NSDateComponents *dateOfBirthComponents;
@property (readonly, copy) NSString *fullName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfBirthComponents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullName:(id)arg1 dateOfBirthComponents:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
