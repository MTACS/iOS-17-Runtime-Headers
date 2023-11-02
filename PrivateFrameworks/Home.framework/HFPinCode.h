
@interface HFPinCode : NSObject <NSCopying> {
    NSMutableSet * _accessories;
    NSMutableSet * _accessoryAccessCodes;
    NSString * _pinCodeValue;
    NSString * _unknownMatterGuestUniqueID;
    HMAccessCodeUserInformation * _userLabel;
}

@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic, readonly) NSSet *accessoryAccessCodes;
@property (nonatomic, readonly) bool hasRestrictions;
@property (nonatomic, readonly, copy) NSString *pinCodeValue;
@property (nonatomic, retain) NSString *unknownMatterGuestUniqueID;
@property (nonatomic, retain) HMAccessCodeUserInformation *userLabel;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)accessories;
- (id)accessoryAccessCodes;
- (void)addAccessories:(id)arg1;
- (void)addAccessoryAccessCode:(id)arg1;
- (id)copyWithNewPinCodeValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasRestrictions;
- (unsigned long long)hash;
- (id)initWithAccessoryAccessCode:(id)arg1;
- (id)initWithHomeAccessCode:(id)arg1;
- (id)initWithLabel:(id)arg1 accessCodeValue:(id)arg2 accessoryAccessCodes:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)pinCodeValue;
- (void)removeAccessories:(id)arg1;
- (void)removeAccessoryAccessCode:(id)arg1;
- (void)setUnknownMatterGuestUniqueID:(id)arg1;
- (void)setUserLabel:(id)arg1;
- (id)unknownMatterGuestUniqueID;
- (id)userLabel;

@end
