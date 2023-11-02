
@interface STConversationContext : NSObject {
    NSDictionary * _allowedByContactsHandle;
    bool  _allowedByScreenTime;
    bool  _applicationCurrentlyLimited;
    NSDictionary * _contactsByHandle;
    unsigned long long  _currentApplicationState;
    bool  _emergencyModeEnabled;
    bool  _shouldBeAllowedByScreenTimeWhenLimited;
    bool  _shouldBeAllowedDuringGeneralScreenTime;
    NSArray * _whitelistedHandles;
}

@property (copy) NSDictionary *allowedByContactsHandle;
@property bool allowedByScreenTime;
@property bool applicationCurrentlyLimited;
@property (copy) NSDictionary *contactsByHandle;
@property unsigned long long currentApplicationState;
@property bool emergencyModeEnabled;
@property bool shouldBeAllowedByScreenTimeWhenLimited;
@property bool shouldBeAllowedDuringGeneralScreenTime;
@property (copy) NSArray *whitelistedHandles;

- (void).cxx_destruct;
- (id)allowedByContactsHandle;
- (bool)allowedByScreenTime;
- (bool)applicationCurrentlyLimited;
- (id)contactsByHandle;
- (unsigned long long)currentApplicationState;
- (bool)emergencyModeEnabled;
- (id)init;
- (void)setAllowedByContactsHandle:(id)arg1;
- (void)setAllowedByScreenTime:(bool)arg1;
- (void)setApplicationCurrentlyLimited:(bool)arg1;
- (void)setContactsByHandle:(id)arg1;
- (void)setCurrentApplicationState:(unsigned long long)arg1;
- (void)setEmergencyModeEnabled:(bool)arg1;
- (void)setShouldBeAllowedByScreenTimeWhenLimited:(bool)arg1;
- (void)setShouldBeAllowedDuringGeneralScreenTime:(bool)arg1;
- (void)setWhitelistedHandles:(id)arg1;
- (bool)shouldBeAllowedByScreenTimeWhenLimited;
- (bool)shouldBeAllowedDuringGeneralScreenTime;
- (void)updateForThirdPartyApplicationState:(long long)arg1;
- (void)updateShouldBeAllowedDuringGeneralScreenTime:(bool)arg1 shouldBeAllowedByScreenTimeWhenLimited:(bool)arg2 currentApplicationState:(unsigned long long)arg3 emergencyModeEnabled:(bool)arg4;
- (id)whitelistedHandles;

@end
