
@interface NDOFollowUp : NSObject {
    <NDOFollowUpProvider> * _followUpProvider;
}

@property (retain) <NDOFollowUpProvider> *followUpProvider;

+ (id)uniqueIdentfierForSerialNumber:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkConversionEligibilityForDevice:(id)arg1;
- (void)_clearFollowUpForSerialNumber:(id)arg1;
- (void)_clearFollowUpWithDevices:(id)arg1;
- (bool)_postFollowUpWithDevicesInfo:(id)arg1 repostAllowed:(bool)arg2;
- (void)_setupFollowUpItem:(id)arg1 withDeviceInfo:(id)arg2;
- (id)_setupFollowUpNotificationWithDeviceInfo:(id)arg1;
- (void)dismissFollowUpForSerialNumber:(id)arg1;
- (void)dismissNotificationForSerialNumber:(id)arg1;
- (id)followUpProvider;
- (id)init;
- (id)initWithFollowUpProvider:(id)arg1;
- (void)migrateLegacyFollowUpIfNeededWithDeviceInfo:(id)arg1;
- (unsigned long long)pendingFollowUpCount;
- (void)postFollowUpWithDeviceInfo:(id)arg1;
- (bool)postFollowUpWithDevicesInfo:(id)arg1;
- (id)refreshFollowupWithDeviceInfo:(id)arg1 andForcePostFollowup:(bool)arg2;
- (id)refreshFollowupWithDeviceInfos:(id)arg1 andForcePostFollowup:(bool)arg2;
- (id)refreshFollowupWithDeviceInfos:(id)arg1 clearUntrackedDeviceFollowups:(bool)arg2 andForcePostFollowup:(bool)arg3;
- (void)setFollowUpProvider:(id)arg1;

@end
