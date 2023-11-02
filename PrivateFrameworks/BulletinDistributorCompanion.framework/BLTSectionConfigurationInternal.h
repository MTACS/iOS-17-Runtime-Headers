
@interface BLTSectionConfigurationInternal : NSObject {
    NSDictionary * _configurations;
}

- (void).cxx_destruct;
- (id)_loadConfigurations;
- (id)additionalBridgeSectionIDsForSectionID:(id)arg1;
- (bool)applyAllowListToChildSections:(id)arg1;
- (unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2;
- (unsigned long long)coordinationTypeForSectionID:(id)arg1 subtype:(long long)arg2 category:(id)arg3;
- (bool)hasSectionIDDisplayedCriticalBulletins:(id)arg1;
- (bool)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1;
- (bool)hasSectionIDOptedOutOfNotificationTuning:(id)arg1;
- (bool)hasSectionIDOptedOutOfSettingsCoordination:(id)arg1;
- (bool)hasSectionIDOptedOutOfSubtitleRemovalForOlderWatches:(id)arg1;
- (bool)hasSectionIDOptedOutOfWaitForUserIdle:(id)arg1;
- (id)init;
- (unsigned long long)legacyMapLocationForSectionID:(id)arg1;
- (bool)setCoordinationType:(unsigned long long)arg1 sectionID:(id)arg2;
- (bool)shouldSectionIDAlwaysAlert:(id)arg1 category:(id)arg2;
- (bool)shouldSectionIDSettingsAlwaysSync:(id)arg1;
- (bool)shouldUsePhoneExpirationDateForSectionID:(id)arg1;
- (id)watchVersionThatUsesAttachmentURLForSectionID:(id)arg1;
- (id)watchVersionThatUsesUserInfoForContextForSectionID:(id)arg1;

@end
