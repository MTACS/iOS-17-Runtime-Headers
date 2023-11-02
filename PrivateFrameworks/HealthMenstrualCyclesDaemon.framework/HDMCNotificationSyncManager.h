
@interface HDMCNotificationSyncManager : NSObject <HDNotificationSyncClientDelegate> {
    HDNotificationSyncClient * _notificationSyncClient;
    HDProfile * _profile;
    id /* block */  _unitTest_didProcessNotificationInstruction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDNotificationSyncClient *notificationSyncClient;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_didProcessNotificationInstruction;

- (void).cxx_destruct;
- (void)_handleDismissInstructionWithClient:(id)arg1;
- (id)holdInstructionCategoryIdentifiersWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (id)notificationSyncClient;
- (void)notificationSyncClient:(id)arg1 didReceiveInstructionWithAction:(long long)arg2;
- (void)sendNotificationInstructionsForSchedulingChanges:(id)arg1 sampleInfo:(id)arg2;
- (void)setUnitTest_didProcessNotificationInstruction:(id /* block */)arg1;
- (id /* block */)unitTest_didProcessNotificationInstruction;

@end
