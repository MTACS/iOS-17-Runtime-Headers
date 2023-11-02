
@protocol BLTSectionInfoListDelegate <NSObject>

@required

- (void)sectionInfoList:(BLTSectionInfoList *)arg1 makeAuthorizationPermanentForSectionID:(NSString *)arg2;
- (bool)sectionInfoList:(BLTSectionInfoList *)arg1 override:(NSDictionary *)arg2 shouldApplyToSectionInfoForSectionID:(NSString *)arg3;
- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedRemoveSectionWithSectionID:(NSString *)arg2 transaction:(BLTTransaction *)arg3;
- (void)sectionInfoList:(BLTSectionInfoList *)arg1 receivedUpdatedSectionInfoForSectionID:(NSString *)arg2 transaction:(BLTTransaction *)arg3;
- (bool)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(NSString *)arg1;

@end
