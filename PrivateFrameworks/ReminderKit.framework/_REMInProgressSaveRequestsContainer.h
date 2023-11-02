
@interface _REMInProgressSaveRequestsContainer : NSObject {
    NSMutableArray * _inProgressSaveRequests;
}

@property (nonatomic, retain) NSMutableArray *inProgressSaveRequests;

- (void).cxx_destruct;
- (id)_firstMatchInSaveRequests:(id /* block */)arg1;
- (id)_latestSaveInProgressAccountForObjectID:(id)arg1 saveRequest:(id)arg2;
- (id)_latestSaveInProgressListForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackParentList:(id)arg3 saveRequest:(id)arg4;
- (id)_latestSaveInProgressReminderForObjectID:(id)arg1 fallbackAccount:(id)arg2 fallbackList:(id)arg3 fallbackParentList:(id)arg4 fallbackParentReminder:(id)arg5 saveRequest:(id)arg6;
- (id)inProgressSaveRequests;
- (id)init;
- (id)latestSaveInProgressAccount:(id)arg1;
- (id)latestSaveInProgressList:(id)arg1;
- (id)latestSaveInProgressReminder:(id)arg1;
- (id)latestSaveInProgressReminderForReminderChangeItem:(id)arg1;
- (void)saveRequestSaveDidFinish:(id)arg1;
- (void)saveRequestSaveDidStart:(id)arg1;
- (void)setInProgressSaveRequests:(id)arg1;

@end
