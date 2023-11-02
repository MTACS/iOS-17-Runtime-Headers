
@interface HFPinCodeDataStore : NSObject {
    HFPinCode * _currentUserPinCode;
    NSMutableDictionary * _guestPINCodes;
    NSMutableDictionary * _otherEcosystemGuestPINCodes;
    NSMutableDictionary * _removedUserPINCodes;
    NSMutableDictionary * _userPINCodes;
}

@property (nonatomic, retain) HFPinCode *currentUserPinCode;
@property (nonatomic, retain) NSMutableDictionary *guestPINCodes;
@property (nonatomic, retain) NSMutableDictionary *otherEcosystemGuestPINCodes;
@property (nonatomic, retain) NSMutableDictionary *removedUserPINCodes;
@property (nonatomic, retain) NSMutableDictionary *userPINCodes;

- (void).cxx_destruct;
- (id)currentUserPinCode;
- (id)guestPINCodes;
- (id)guestPinCodeFromItem:(id)arg1;
- (id)init;
- (void)mergeData:(id)arg1;
- (id)otherEcosystemGuestPINCodes;
- (id)pinCodeForCodeValue:(id)arg1;
- (id)pinCodeFromItem:(id)arg1;
- (id)removedUserPINCodes;
- (void)setCurrentUserPinCode:(id)arg1;
- (void)setGuestPINCodes:(id)arg1;
- (void)setOtherEcosystemGuestPINCodes:(id)arg1;
- (void)setRemovedUserPINCodes:(id)arg1;
- (void)setUserPINCodes:(id)arg1;
- (void)updateWithPinCode:(id)arg1 forOldCodeValue:(id)arg2;
- (id)userPINCodes;

@end
