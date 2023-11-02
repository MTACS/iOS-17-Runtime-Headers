
@interface HDCloudSyncAvailability : NSObject {
    bool  _shouldPull;
    bool  _shouldPush;
    bool  _shouldSyncAttachments;
    bool  _shouldSyncDeviceContext;
    bool  _shouldSyncMedicalID;
    bool  _shouldSyncStateEntities;
    bool  _shouldSyncSummarySharing;
}

@property (nonatomic, readonly) bool shouldPull;
@property (nonatomic, readonly) bool shouldPush;
@property (nonatomic, readonly) bool shouldSyncAttachments;
@property (nonatomic, readonly) bool shouldSyncDeviceContext;
@property (nonatomic, readonly) bool shouldSyncMedicalID;
@property (nonatomic, readonly) bool shouldSyncStateEntities;
@property (nonatomic, readonly) bool shouldSyncSummarySharing;

- (void)_setShouldPullWithProfile:(id)arg1;
- (void)_setShouldPushWithProfile:(id)arg1;
- (void)_setShouldSyncAttachmentsWithProfile:(id)arg1;
- (void)_setShouldSyncDeviceContextWithProfile:(id)arg1;
- (void)_setShouldSyncMedicalIDWithProfile:(id)arg1;
- (void)_setShouldSyncStateEntitiesWithProfile:(id)arg1;
- (void)_setShouldSyncSummarySharingWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)shouldPull;
- (bool)shouldPush;
- (bool)shouldSyncAttachments;
- (bool)shouldSyncDeviceContext;
- (bool)shouldSyncMedicalID;
- (bool)shouldSyncStateEntities;
- (bool)shouldSyncSummarySharing;

@end
