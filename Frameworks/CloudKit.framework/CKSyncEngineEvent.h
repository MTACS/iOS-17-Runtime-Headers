
@interface CKSyncEngineEvent : NSObject <CKPropertiesDescription>

@property (nonatomic, readonly) CKSyncEngineAccountChangeEvent *accountChangeEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKSyncEngineDidFetchChangesEvent *didFetchChangesEvent;
@property (nonatomic, readonly) CKSyncEngineDidFetchRecordZoneChangesEvent *didFetchRecordZoneChangesEvent;
@property (nonatomic, readonly) CKSyncEngineDidSendChangesEvent *didSendChangesEvent;
@property (nonatomic, readonly) CKSyncEngineFetchedDatabaseChangesEvent *fetchedDatabaseChangesEvent;
@property (nonatomic, readonly) CKSyncEngineFetchedRecordZoneChangesEvent *fetchedRecordZoneChangesEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKSyncEngineSentDatabaseChangesEvent *sentDatabaseChangesEvent;
@property (nonatomic, readonly) CKSyncEngineSentRecordZoneChangesEvent *sentRecordZoneChangesEvent;
@property (nonatomic, readonly) CKSyncEngineStateUpdateEvent *stateUpdateEvent;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (nonatomic, readonly) CKSyncEngineWillFetchChangesEvent *willFetchChangesEvent;
@property (nonatomic, readonly) CKSyncEngineWillFetchRecordZoneChangesEvent *willFetchRecordZoneChangesEvent;
@property (nonatomic, readonly) CKSyncEngineWillSendChangesEvent *willSendChangesEvent;

+ (void)initialize;

- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)accountChangeEvent;
- (id)description;
- (id)didFetchChangesEvent;
- (id)didFetchRecordZoneChangesEvent;
- (id)didSendChangesEvent;
- (id)fetchedDatabaseChangesEvent;
- (id)fetchedRecordZoneChangesEvent;
- (id)initInternal;
- (id)redactedDescription;
- (id)sentDatabaseChangesEvent;
- (id)sentRecordZoneChangesEvent;
- (id)stateUpdateEvent;
- (long long)type;
- (id)willFetchChangesEvent;
- (id)willFetchRecordZoneChangesEvent;
- (id)willSendChangesEvent;

@end
