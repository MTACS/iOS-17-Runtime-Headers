
@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoSyncProvider, CoreDAVContainerInfoTaskGroupDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSString * _calendarHomeSyncToken;
    NSMutableDictionary * _ctags;
    bool  _didFinish;
    bool  _didMakeCalendars;
    bool  _forceClearCalendarHomeSyncToken;
    bool  _isSecondRefresh;
    NSMutableSet * _localCalendarsWithNoPath;
    int  _nextCalendarOrder;
    NSObject<OS_dispatch_group> * _outstandingTasksGroup;
    NSMutableDictionary * _pathToLocalCalendar;
    NSError * _savedError;
    NSMutableDictionary * _syncTokens;
    NSMutableSet * _updatedCalendars;
    bool  _useCalendarHomeSyncReport;
}

@property (nonatomic, retain) NSString *calendarHomeSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CalDAVCalendarPropertyRefreshDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceClearCalendarHomeSyncToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *outstandingTasksGroup;
@property (readonly) Class superclass;
@property (nonatomic) bool useCalendarHomeSyncReport;

- (void).cxx_destruct;
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)_finishRefresh;
- (id)_generateTimeZoneString:(id)arg1;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)arg1 isEventCalendar:(bool)arg2;
- (id)_getIsAffectingAvailabilityCoreDAVItem:(id)arg1;
- (id)_getMkcalendarTaskGroupForCalendar:(id)arg1;
- (id)_getSetIsAffectingAvailabilityTask:(bool)arg1 forCalendar:(id)arg2 atURL:(id)arg3;
- (id)_getSetPropertiesTaskWithItemsToSet:(id)arg1 itemsToRemove:(id)arg2 atURL:(id)arg3;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 forCalendar:(id)arg4 atURL:(id)arg5;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 forCalendar:(id)arg4 atURL:(id)arg5 ignoreErrors:(bool)arg6;
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)arg1 forCalendar:(id)arg2 atURL:(id)arg3;
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)arg1 forCalendar:(id)arg2 atURL:(id)arg3 ignoreErrors:(bool)arg4;
- (void)_handleCalendarPublish;
- (bool)_handleMkCalTaskGroupError:(id)arg1 forCalendar:(id)arg2;
- (bool)_handleUpdateForCalendar:(id)arg1;
- (void)_initializePrincipalCalendarCache;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_reallyRefreshCalendarProperties;
- (void)_retryMkCalForCalendar:(id)arg1;
- (void)_sendAddsForCalendars;
- (void)_sendDeletesForCalendars;
- (void)_sendShareActionTasks;
- (int)_sharingStatusForContainer:(id)arg1;
- (void)_updateDefaultSchedulingCalendarIfNeededForInboxCalendar:(id)arg1 withContainer:(id)arg2;
- (id)calendarHomeSyncToken;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)continueRefreshFromSendingDeletes;
- (bool)forceClearCalendarHomeSyncToken;
- (id)initWithPrincipal:(id)arg1;
- (id)outstandingTasksGroup;
- (void)refreshCalendarProperties;
- (void)setCalendarHomeSyncToken:(id)arg1;
- (void)setForceClearCalendarHomeSyncToken:(bool)arg1;
- (void)setOutstandingTasksGroup:(id)arg1;
- (void)setUseCalendarHomeSyncReport:(bool)arg1;
- (bool)useCalendarHomeSyncReport;

@end
