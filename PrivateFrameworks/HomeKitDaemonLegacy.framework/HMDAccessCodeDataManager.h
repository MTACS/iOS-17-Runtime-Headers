
@interface HMDAccessCodeDataManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDAccessCodeManagerContext * _context;
    HMFTimer * _dataCleanUpTimer;
    id /* block */  _dataCleanUpTimerFactory;
    <HMDAccessCodeDataManagerDelegate> * _delegate;
}

@property (readonly, copy) NSSet *accessCodeValuesWithRemovedUserInfo;
@property (readonly, copy) NSSet *accessCodeValuesWithSimpleLabel;
@property (readonly, copy) NSSet *accessCodeValuesWithUserLabel;
@property (readonly, copy) NSArray *cachedAccessCodes;
@property (readonly) HMDAccessCodeManagerContext *context;
@property (retain) HMFTimer *dataCleanUpTimer;
@property (copy) id /* block */ dataCleanUpTimerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDAccessCodeDataManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *homeAccessCodeValues;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithRemovedUserInfo;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithSimpleLabels;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithUserLabels;
@property (readonly) Class superclass;

+ (id)_accessCodeInHome:(id)arg1 forHomeAccessCodeModel:(id)arg2;
+ (id)_accessCodeInHome:(id)arg1 forRemovedUserAccessCodeModel:(id)arg2;
+ (id)createHomeAccessCodeModelsFromLabelsByAccessCode:(id)arg1 forHome:(id)arg2;
+ (id)createRemovedUserInfoModelsFromRemovedUserInfoByAccessCode:(id)arg1 forHome:(id)arg2;
+ (id)createUserAccessCodeModelFromAccessCode:(id)arg1 forUserUUID:(id)arg2 changedByUserUUID:(id)arg3;
+ (id)logCategory;
+ (id)userWithAccessCode:(id)arg1 inHome:(id)arg2;

- (void).cxx_destruct;
- (void)_cleanUpOldRemovedUserData;
- (void)_messageUser:(id)arg1 thatTheirAccessCodeWasChangedWithType:(unsigned long long)arg2;
- (id)_removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg1;
- (id)_removeSimpleLabelAccessCodeValue:(id)arg1;
- (id)_removeUserAccessCodeValue:(id)arg1 removedByUserUUID:(id)arg2;
- (id)_setSimpleLabel:(id)arg1 forAccessCodeValue:(id)arg2;
- (void)_setUpAndStartTimer;
- (id)_setUserWithUUID:(id)arg1 forAccessCodeValue:(id)arg2 changedByUserUUID:(id)arg3;
- (id)accessCodeValuesWithRemovedUserInfo;
- (id)accessCodeValuesWithSimpleLabel;
- (id)accessCodeValuesWithUserLabel;
- (id)addOrUpdateHMDRemovedUserAccessCodeModel:(id)arg1;
- (id)addOrUpdateHomeAccessCodeModel:(id)arg1;
- (id)addOrUpdateUserAccessCodeModel:(id)arg1;
- (id)cachedAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2;
- (id)cachedAccessCodes;
- (void)configure;
- (id)context;
- (id)dataCleanUpTimer;
- (id /* block */)dataCleanUpTimerFactory;
- (id)delegate;
- (void)handleRemovedHMDRemovedUserAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedHomeAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedUserAccessCodeModel:(id)arg1 forUser:(id)arg2 message:(id)arg3;
- (void)handleUpdatedHMDRemovedUserAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleUpdatedHomeAccessCodeModel:(id)arg1 message:(id)arg2;
- (void)handleUpdatedUserAccessCodeModel:(id)arg1 forUser:(id)arg2 message:(id)arg3;
- (id)homeAccessCodeValues;
- (id)homeAccessCodeValuesWithRemovedUserInfo;
- (id)homeAccessCodeValuesWithSimpleLabels;
- (id)homeAccessCodeValuesWithUserLabels;
- (id)homeAccessCodeWithRemovedUserInfoWithUUID:(id)arg1;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)logIdentifier;
- (id)removeAllHomeAccessCodes;
- (id)removeHMDRemovedUserAccessCodeModel:(id)arg1;
- (void)removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg1;
- (id)removeHMDRemovedUserAccessCodeWithCode:(id)arg1 removedUserInfo:(id)arg2;
- (id)removeHomeAccessCodeModel:(id)arg1;
- (id)removeHomeAccessCodeWithValue:(id)arg1 removedByUserUUID:(id)arg2;
- (id)removeUserAccessCodeModel:(id)arg1;
- (id)saveRemovedUserAccessCode:(id)arg1 withRemovedUserInfo:(id)arg2;
- (void)setDataCleanUpTimer:(id)arg1;
- (void)setDataCleanUpTimerFactory:(id /* block */)arg1;
- (id)setUserInformation:(id)arg1 forHomeAccessCodeWithValue:(id)arg2 changedByUserUUID:(id)arg3;
- (id)simpleLabelForAccessCode:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)updateCacheWithAddedAccessCodes:(id)arg1;
- (void)updateCacheWithFetchResponses:(id)arg1;
- (void)updateCacheWithRemovedAccessCodes:(id)arg1;
- (void)updateCacheWithUpdatedAccessCodes:(id)arg1;
- (id)updateUserInformation:(id)arg1 forHomeAccessCodeWithOldValue:(id)arg2 newAccessCodeValue:(id)arg3;
- (id)userUUIDForAccessCode:(id)arg1;

@end
