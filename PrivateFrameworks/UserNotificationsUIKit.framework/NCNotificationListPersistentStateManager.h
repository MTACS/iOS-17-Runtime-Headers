
@interface NCNotificationListPersistentStateManager : NSObject {
    NSDictionary * _cachedListRepresentation;
    NSDictionary * _cachedListRepresentationForThrottledWrite;
    NSDateFormatter * _dateFormatter;
    <NCNotificationListPersistentStateManagerDelegate> * _delegate;
    bool  _fileWritingThrottled;
    bool  _loadedStoredPersistentState;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _storedCurrentDigestMigrationTimeExpired;
    NSMutableDictionary * _storedPersistentMigrationTimes;
    NSMutableDictionary * _storedPersistentStateRepresentation;
    NSDate * _storedPersistentSummaryMigrationTime;
}

@property (nonatomic, retain) NSDictionary *cachedListRepresentation;
@property (nonatomic, retain) NSDictionary *cachedListRepresentationForThrottledWrite;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic) <NCNotificationListPersistentStateManagerDelegate> *delegate;
@property (getter=isFileWritingThrottled, nonatomic) bool fileWritingThrottled;
@property (getter=hasLoadedStoredPersistentState, nonatomic) bool loadedStoredPersistentState;
@property (getter=hasStoredCurrentDigestMigrationTimeExpired, nonatomic) bool storedCurrentDigestMigrationTimeExpired;
@property (nonatomic, retain) NSMutableDictionary *storedPersistentMigrationTimes;
@property (nonatomic, retain) NSMutableDictionary *storedPersistentStateRepresentation;
@property (nonatomic, retain) NSDate *storedPersistentSummaryMigrationTime;

+ (id)_dataDirectoryPath;
+ (id)_persistentStateFilePath;

- (void).cxx_destruct;
- (void)_clearStoredListRepresentationForSectionIdentifier:(id)arg1;
- (void)_clearStoredRequestMigrationTimesForSectionIdentifier:(id)arg1;
- (void)_clearStoredSectionIdentifier:(id)arg1 inMutableRepresentationForSection:(id)arg2;
- (bool)_doesPersistentStateFileExist;
- (void)_ensureDataDirectoryExists;
- (int)_formatVersionForListRepresentation:(id)arg1;
- (unsigned long long)_getSectionTypeAndRemoveNotificationRequest:(id)arg1 inMutableRepresentationForSections:(id)arg2;
- (id)_getStoredMigrationTimeAndClearNotificationRequest:(id)arg1;
- (bool)_isListRepresentation:(id)arg1 equalToListRepresentation:(id)arg2;
- (bool)_isMutableListRepresentationEmpty:(id)arg1;
- (bool)_isRepresentationForGroup:(id)arg1 equalToRepresentationForGroup:(id)arg2;
- (bool)_isRepresentationForGroupEmpty:(id)arg1;
- (bool)_isRepresentationForGroups:(id)arg1 equalToRepresentationForGroups:(id)arg2;
- (bool)_isRepresentationForMigrationTimes:(id)arg1 equalToRepresentationForMigrationTimes:(id)arg2;
- (bool)_isRepresentationForSection:(id)arg1 equalToRepresentationForSection:(id)arg2;
- (bool)_isRepresentationForSectionEmpty:(id)arg1;
- (bool)_isRepresentationForSections:(id)arg1 equalToRepresentationForSections:(id)arg2;
- (id)_listRepresentationForNotificationList:(id)arg1 sections:(id)arg2 listCache:(id)arg3 migrationScheduler:(id)arg4 listInfo:(id)arg5 detailed:(bool)arg6;
- (void)_mergePendingNotificationListRepresentation:(id)arg1 withMutableListRepresentation:(id)arg2;
- (void)_mergePendingRequestMigrationTimesRepresentation:(id)arg1 withMutableRepresentationForRequestMigrationTimes:(id)arg2;
- (void)_mergeRepresentationForGroup:(id)arg1 withMutableRepresentationForGroup:(id)arg2;
- (void)_mergeRepresentationForNotificationRequests:(id)arg1 withMutableRepresentationForNotificationRequests:(id)arg2;
- (void)_mergeRepresentationForSection:(id)arg1 withMutableRepresentationForSection:(id)arg2;
- (id)_mutableRepresentationForRepresentationForGroup:(id)arg1;
- (id)_mutableRepresentationForRepresentationForNotificationRequests:(id)arg1;
- (id)_mutableRepresentationForRepresentationForRequestMigrationTimes:(id)arg1;
- (id)_mutableRepresentationForRepresentationForSection:(id)arg1;
- (id)_mutableRepresentationForRequestMigrationTimesInRepresentationForList:(id)arg1;
- (id)_mutableRepresentationForStoredListRepresentation:(id)arg1;
- (void)_publishOnReadForStoredPersistentStateRepresentation:(id)arg1;
- (void)_readPersistentStateFromFile;
- (void)_readPersistentStateFromFileIfNecessaryWithCompletion:(id /* block */)arg1;
- (bool)_removeNotificationRequest:(id)arg1 inMutableRepresentationForGroup:(id)arg2;
- (bool)_removeNotificationRequest:(id)arg1 inMutableRepresentationForSection:(id)arg2;
- (id)_representationForGroup:(id)arg1 atIndex:(unsigned long long)arg2 detailed:(bool)arg3;
- (id)_representationForGroupWithSectionIdentifier:(id)arg1 threadIdentifier:(id)arg2 inRepresentationForGroups:(id)arg3;
- (id)_representationForGroups:(id)arg1 detailed:(bool)arg2;
- (id)_representationForListCache:(id)arg1;
- (id)_representationForMigrationScheduler:(id)arg1;
- (id)_representationForNotificationRequest:(id)arg1;
- (id)_representationForNotificationRequests:(id)arg1 detailed:(bool)arg2;
- (id)_representationForRequestMigrationTimes:(id)arg1;
- (id)_representationForSection:(id)arg1 detailed:(bool)arg2;
- (id)_representationForSections:(id)arg1 detailed:(bool)arg2;
- (void)_scheduleThrottledPersistentStateWrite;
- (id)_sectionRepresentationOfSectionType:(id)arg1 inRepresentationForSections:(id)arg2;
- (id)_summaryMigrationTimeInRepresentationForList:(id)arg1;
- (void)_writePersistentStateToFileWithRepresentation:(id)arg1;
- (id)cachedListRepresentation;
- (id)cachedListRepresentationForThrottledWrite;
- (id)dateFormatter;
- (id)delegate;
- (bool)hasLoadedStoredPersistentState;
- (bool)hasStoredCurrentDigestMigrationTimeExpired;
- (id)initWithDelegate:(id)arg1;
- (bool)isFileWritingThrottled;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;
- (unsigned long long)sectionForStoredNotificationRequest:(id)arg1;
- (void)setCachedListRepresentation:(id)arg1;
- (void)setCachedListRepresentationForThrottledWrite:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileWritingThrottled:(bool)arg1;
- (void)setLoadedStoredPersistentState:(bool)arg1;
- (void)setStoredCurrentDigestMigrationTimeExpired:(bool)arg1;
- (void)setStoredPersistentMigrationTimes:(id)arg1;
- (void)setStoredPersistentStateRepresentation:(id)arg1;
- (void)setStoredPersistentSummaryMigrationTime:(id)arg1;
- (id)stateRepresentationForNotificationList:(id)arg1 sectionLists:(id)arg2 listCache:(id)arg3 migrationScheduler:(id)arg4 listInfo:(id)arg5 detailed:(bool)arg6;
- (id)storedPersistentMigrationTimes;
- (id)storedPersistentStateRepresentation;
- (id)storedPersistentSummaryMigrationTime;
- (void)updatePersistentStateForNotificationList:(id)arg1 sectionLists:(id)arg2 listCache:(id)arg3 migrationScheduler:(id)arg4 listInfo:(id)arg5 detailed:(bool)arg6;

@end