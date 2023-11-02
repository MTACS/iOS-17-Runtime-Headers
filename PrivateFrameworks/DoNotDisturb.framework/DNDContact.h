
@interface DNDContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _contactIdentifier;
    NSSet * _emailAddresses;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickName;
    NSString * _organizationName;
    NSSet * _phoneNumbers;
}

@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSSet *emailAddresses;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly, copy) NSString *nickName;
@property (nonatomic, readonly, copy) NSString *organizationName;
@property (nonatomic, readonly, copy) NSSet *phoneNumbers;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (id)normalizePhoneNumber:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForRedacted:(bool)arg1;
- (id)_initWithContactIdentifier:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 nickName:(id)arg5 organizationName:(id)arg6 phoneNumbers:(id)arg7 emailAddresses:(id)arg8;
- (id)_redactedDescriptionsForStrings:(id)arg1;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diffDescription;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (bool)matchesContact:(id)arg1;
- (bool)matchesContactHandle:(id)arg1;
- (id)middleName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nickName;
- (id)normalizedPhoneNumbers;
- (id)organizationName;
- (id)phoneNumbers;
- (id)redactedDescription;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)contactForRecord:(id)arg1;
+ (id)contactWithCNContact:(id)arg1;
+ (id)keysToFetch;

- (id)makeRecord;
- (bool)needsSanitization;
- (id)sanitizedContactWithContactStore:(id)arg1 withError:(out id*)arg2;

@end
