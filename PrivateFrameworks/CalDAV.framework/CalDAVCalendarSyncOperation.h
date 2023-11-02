
@interface CalDAVCalendarSyncOperation : CalDAVOperation {
    <CalDAVCalendar> * _calendar;
    unsigned long long  _currentStage;
    bool  _getScheduleChanges;
    bool  _getScheduleTags;
    NSString * _nextCtag;
    NSString * _nextSyncToken;
    NSError * _reportJunkError;
    NSError * _savedError;
}

@property (nonatomic) <CalDAVCalendarSyncDelegate> *delegate;
@property (nonatomic) bool getScheduleChanges;
@property (nonatomic) bool getScheduleTags;

- (void).cxx_destruct;
- (void)_advanceStage;
- (id)_distantFutureEndDate;
- (void)_finishWithError:(id)arg1;
- (void)_performNextStage;
- (void)_processAddedOrModified:(id)arg1 removed:(id)arg2;
- (void)_reportJunk:(id)arg1;
- (void)_splitRecurrences;
- (void)_syncCalendar;
- (void)_syncEventsForMerge;
- (void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;
- (void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;
- (bool)getScheduleChanges;
- (bool)getScheduleTags;
- (id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4;
- (void)recurrenceSplitAction:(id)arg1 completedWithUpdatedETag:(id)arg2 updatedScheduleTag:(id)arg3 createdURL:(id)arg4 createdETag:(id)arg5 createdScheduleTag:(id)arg6;
- (void)recurrenceSplitAction:(id)arg1 failedWithError:(id)arg2;
- (void)reportJunkAction:(id)arg1 completedWithError:(id)arg2;
- (void)setGetScheduleChanges:(bool)arg1;
- (void)setGetScheduleTags:(bool)arg1;
- (bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
- (bool)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
- (void)syncCalendar;
- (bool)syncDeleteTask:(id)arg1 error:(id)arg2;
- (bool)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;

@end
