
@interface HFPinCodeItem : HFItem <NSCopying> {
    NSArray * _accessories;
    bool  _hasRestrictions;
    HMHome * _home;
    id /* block */  _isEnabledOnAccessory;
    bool  _isGuest;
    NSString * _pinCodeValue;
    NSString * _unknownMatterGuestUniqueID;
    HMAccessCodeUserInformation * _userLabel;
}

@property (nonatomic, retain) NSArray *accessories;
@property (nonatomic) bool hasRestrictions;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, copy) id /* block */ isEnabledOnAccessory;
@property (nonatomic) bool isGuest;
@property (nonatomic, readonly) bool isUnknownGuestFromMatter;
@property (nonatomic, copy) NSString *pinCodeValue;
@property (nonatomic, retain) NSString *unknownMatterGuestUniqueID;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, retain) HMAccessCodeUserInformation *userLabel;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_userHandle;
- (id)_userLabel;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasRestrictions;
- (unsigned long long)hash;
- (id)home;
- (id)initWithPinCode:(id)arg1 inHome:(id)arg2 onAccessory:(id)arg3;
- (id /* block */)isEnabledOnAccessory;
- (bool)isEqual:(id)arg1;
- (bool)isGuest;
- (bool)isUnknownGuestFromMatter;
- (id)pinCodeValue;
- (void)setAccessories:(id)arg1;
- (void)setHasRestrictions:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setIsEnabledOnAccessory:(id /* block */)arg1;
- (void)setIsGuest:(bool)arg1;
- (void)setPinCodeValue:(id)arg1;
- (void)setUnknownMatterGuestUniqueID:(id)arg1;
- (void)setUserLabel:(id)arg1;
- (id)unknownMatterGuestUniqueID;
- (void)updateFromPinCode:(id)arg1;
- (id)user;
- (id)userLabel;

@end
