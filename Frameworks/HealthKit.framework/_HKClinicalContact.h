
@interface _HKClinicalContact : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _nameContactIdentifier;
    NSString * _phoneNumber;
    NSString * _phoneNumberContactIdentifier;
    NSString * _phoneNumberLabel;
    NSString * _relationship;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nameContactIdentifier;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *phoneNumberContactIdentifier;
@property (nonatomic, copy) NSString *phoneNumberLabel;
@property (nonatomic, copy) NSString *relationship;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)clinicalContactWithContact:(id)arg1 property:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSyncedContact:(id)arg1;
- (id)name;
- (id)nameContactIdentifier;
- (id)phoneNumber;
- (id)phoneNumberContactIdentifier;
- (id)phoneNumberLabel;
- (id)relationship;
- (void)setName:(id)arg1;
- (void)setNameContactIdentifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhoneNumberContactIdentifier:(id)arg1;
- (void)setPhoneNumberLabel:(id)arg1;
- (void)setRelationship:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
