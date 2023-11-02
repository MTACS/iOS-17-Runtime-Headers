
@interface STSetupConfiguration : NSObject <NSCopying, NSSecureCoding> {
    STUserID * _associatedUser;
    long long  _contactManagementState;
    STOpaquePasscode * _passcode;
    long long  _screenTimeState;
    bool  _userHasContacts;
}

@property (readonly, copy) STUserID *associatedUser;
@property (readonly, copy) NSSet *availableContactManagementStates;
@property (readonly, copy) NSSet *availableScreenTimeStates;
@property (readonly) long long contactManagementState;
@property (readonly, copy) STOpaquePasscode *passcode;
@property (readonly) long long screenTimeState;
@property (readonly) bool userHasContacts;

+ (bool)_isContactManagementStateValid:(long long)arg1 pairedWithUserHasContacts:(bool)arg2;
+ (bool)_isScreenTimeStateValid:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForContactManagementStates:(id)arg1;
- (id)_descriptionForScreenTimeStates:(id)arg1;
- (id)_initWithUser:(id)arg1 screenTimeState:(long long)arg2 passcode:(id)arg3 contactManagementState:(long long)arg4 userHasContacts:(bool)arg5;
- (id)associatedUser;
- (id)availableContactManagementStates;
- (id)availableScreenTimeStates;
- (id)configurationWithUpdatedContactManagementState:(long long)arg1 error:(id*)arg2;
- (id)configurationWithUpdatedPasscode:(id)arg1;
- (id)configurationWithUpdatedScreenTimeState:(long long)arg1 error:(id*)arg2;
- (long long)contactManagementState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 screenTimeState:(long long)arg2 passcode:(id)arg3 contactManagementState:(long long)arg4 userHasContacts:(bool)arg5 error:(id*)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSetupConfiguration:(id)arg1;
- (id)passcode;
- (long long)screenTimeState;
- (bool)userHasContacts;

@end
