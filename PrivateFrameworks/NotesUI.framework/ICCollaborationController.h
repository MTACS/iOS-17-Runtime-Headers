
@interface ICCollaborationController : NSObject {
    NSMutableDictionary * _ckShareIDToRootRecordID;
    <ICCollaborationAnalyticsDelegate> * _collaborationAnalyticsDelegate;
    ICCollaborationAnalyticsTracker * _collaborationAnalyticsTracker;
    <ICCollaborationControllerDelegate> * _collaborationControllerDelegate;
    ICSelectorDelayer * _updateSharesDelayer;
}

@property (nonatomic, retain) NSMutableDictionary *ckShareIDToRootRecordID;
@property (nonatomic) <ICCollaborationAnalyticsDelegate> *collaborationAnalyticsDelegate;
@property (nonatomic, retain) ICCollaborationAnalyticsTracker *collaborationAnalyticsTracker;
@property (nonatomic) <ICCollaborationControllerDelegate> *collaborationControllerDelegate;
@property (nonatomic, readonly) ICSelectorDelayer *updateSharesDelayer;

+ (void)acceptShareWithMetadata:(id)arg1 attemptNumber:(id)arg2 container:(id)arg3 accountID:(id)arg4 fetchObjectWithCompletionHandler:(id /* block */)arg5;
+ (void)acceptShareWithMetadata:(id)arg1 container:(id)arg2 accountID:(id)arg3 fetchObjectWithCompletionHandler:(id /* block */)arg4;
+ (void)acceptShareWithMetadata:(id)arg1 managedObjectContext:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)containerForAccountID:(id)arg1;
+ (id)containerForUserRecordID:(id)arg1;
+ (void)didFailToUpdateShareWithError:(id)arg1;
+ (void)didSaveShare:(id)arg1 accountID:(id)arg2;
+ (void)didStopSharing:(id)arg1 recordID:(id)arg2 accountID:(id)arg3;
+ (id)existingShareForObject:(id)arg1 managedObjectContext:(id)arg2;
+ (void)fetchAndAcceptShareMetadataWithURL:(id)arg1 managedObjectContext:(id)arg2 alertBlock:(id /* block */)arg3 showObjectBlock:(id /* block */)arg4;
+ (void)fetchShareIfNecessaryForObject:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)genericShareErrorAlert:(id /* block */)arg1;
+ (id)highlightColorForUserID:(id)arg1 inNote:(id)arg2 isDark:(bool)arg3;
+ (id)newShareForObject:(id)arg1;
+ (id)objectForCKShareRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)objectForShare:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (void)postDidUpdateShareNotificationForObject:(id)arg1;
+ (void)prepareShare:(id)arg1 forObject:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
+ (void)processShareAcceptanceWithMetadata:(id)arg1 managedObjectContext:(id)arg2 alertBlock:(id /* block */)arg3 showObjectBlock:(id /* block */)arg4;
+ (void)registerShareForObject:(id)arg1 itemProvider:(id)arg2 generateThumbnails:(bool)arg3;
+ (void)registerShareForObject:(id)arg1 itemProvider:(id)arg2 generateThumbnails:(bool)arg3 sharePreparationHandler:(id /* block */)arg4;
+ (void)removeShareIfNeededWithOwnedObject:(id)arg1 countParticipants:(bool)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)rootRecordForObject:(id)arg1;
+ (void)saveActivityType:(id)arg1 isCollaborationSelected:(bool)arg2 error:(id)arg3 completed:(bool)arg4 forNote:(id)arg5;
+ (void)saveServerShare:(id)arg1 persistParticipantEvents:(bool)arg2 accountID:(id)arg3;
+ (void)saveShare:(id)arg1 attemptNumber:(id)arg2 forObject:(id)arg3 accountID:(id)arg4 container:(id)arg5 qualityOfService:(long long)arg6 retryPrepHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
+ (void)saveShare:(id)arg1 forObject:(id)arg2 accountID:(id)arg3 container:(id)arg4 qualityOfService:(long long)arg5 retryPrepHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
+ (void)saveShare:(id)arg1 forObject:(id)arg2 qualityOfService:(long long)arg3 completionHandler:(id /* block */)arg4;
+ (void)saveShare:(id)arg1 withRootRecord:(id)arg2 object:(id)arg3 accountID:(id)arg4 container:(id)arg5 qualityOfService:(long long)arg6 completionHandler:(id /* block */)arg7;
+ (id)shareSheetFolderThumbnailImage;
+ (id)shareSheetNoteThumbnailImage;
+ (long long)shareStatusOfFolder:(id)arg1 objectsForMakingDecision:(id)arg2;
+ (id)sharedInstance;
+ (bool)showCloudKitShareAcceptancePartialFailureAlertForError:(id)arg1 alertBlock:(id /* block */)arg2;
+ (void)showQuotaExceededAlertIfNeededWithRecordID:(id)arg1 accountID:(id)arg2;
+ (void)trackShare:(id)arg1 forNote:(id)arg2;
+ (void)updatePendingInvitationsInAccountWithID:(id)arg1 receivedSince:(id)arg2;
+ (void)updateRootRecordMapWithShare:(id)arg1;

- (void).cxx_destruct;
- (id)ckShareIDToRootRecordID;
- (id)collaborationAnalyticsDelegate;
- (id)collaborationAnalyticsTracker;
- (id)collaborationControllerDelegate;
- (id)init;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (void)setCkShareIDToRootRecordID:(id)arg1;
- (void)setCollaborationAnalyticsDelegate:(id)arg1;
- (void)setCollaborationAnalyticsTracker:(id)arg1;
- (void)setCollaborationControllerDelegate:(id)arg1;
- (void)updateShares;
- (id)updateSharesDelayer;

@end
