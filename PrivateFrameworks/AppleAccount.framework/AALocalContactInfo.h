
@interface AALocalContactInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _contactType;
    NSUUID * _custodianID;
    NSNumber * _familyDSID;
    NSString * _familyMemberType;
    NSString * _firstName;
    NSString * _fullName;
    NSString * _handle;
    NSData * _imageData;
    <AAInheritanceContactInfo> * _inheritanceContactInfo;
    bool  _isAcceptedAndShared;
    bool  _isChild;
    bool  _isIdMSConfirmed;
    NSString * _lastName;
    long long  _trustedContactStatus;
}

@property (nonatomic) long long contactType;
@property (nonatomic, copy) NSUUID *custodianID;
@property (nonatomic, readonly) NSNumber *familyDSID;
@property (nonatomic, readonly) NSString *familyMemberType;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, retain) <AAInheritanceContactInfo> *inheritanceContactInfo;
@property (nonatomic) bool isAcceptedAndShared;
@property (nonatomic, readonly) bool isChild;
@property (nonatomic) bool isIdMSConfirmed;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic) long long trustedContactStatus;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_detailsTextForContactType;
- (id)_fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (bool)_isEqualToLocalContact:(id)arg1;
- (long long)contactType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianID;
- (id)detailsText;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)familyDSID;
- (id)familyMemberType;
- (id)firstName;
- (id)firstNameOrHandleForDisplay;
- (id)fullName;
- (id)handle;
- (id)imageData;
- (id)inheritanceContactInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyDSID:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 appleID:(id)arg5 familyMemberType:(id)arg6 isChild:(bool)arg7;
- (id)initWithHandle:(id)arg1 contact:(id)arg2;
- (id)initWithHandle:(id)arg1 firstName:(id)arg2 lastName:(id)arg3;
- (bool)isAcceptedAndShared;
- (bool)isChild;
- (bool)isEqual:(id)arg1;
- (bool)isFamilyMember;
- (bool)isIdMSConfirmed;
- (id)lastName;
- (void)setContactType:(long long)arg1;
- (void)setCustodianID:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setInheritanceContactInfo:(id)arg1;
- (void)setIsAcceptedAndShared:(bool)arg1;
- (void)setIsIdMSConfirmed:(bool)arg1;
- (void)setTrustedContactStatus:(long long)arg1;
- (long long)trustedContactStatus;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (bool)shouldGrayOutContactRow;

@end
