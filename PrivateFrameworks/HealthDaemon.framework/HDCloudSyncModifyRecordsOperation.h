
@interface HDCloudSyncModifyRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    CKContainer * _container;
    CKDatabase * _database;
    NSMutableArray * _deletedRecordIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _markAsParticipantNeedsNewInvitationToken;
    bool  _permitNonAtomicZoneSaves;
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    long long  _savePolicy;
    NSMutableArray * _savedRecords;
    HDSynchronousTaskGroup * _taskGroup;
    bool  _treatAnyErrorAsFatal;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSArray *deletedRecordIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) bool permitNonAtomicZoneSaves;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic, readonly, copy) NSArray *savedRecords;
@property (readonly) Class superclass;
@property (nonatomic) bool treatAnyErrorAsFatal;

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)deletedRecordIDs;
- (id)initWithConfiguration:(id)arg1 container:(id)arg2 recordsToSave:(id)arg3 recordIDsToDelete:(id)arg4;
- (id)initWithConfiguration:(id)arg1 container:(id)arg2 scope:(long long)arg3 recordsToSave:(id)arg4 recordIDsToDelete:(id)arg5;
- (void)main;
- (bool)markAsParticipantNeedsNewInvitationToken;
- (bool)permitNonAtomicZoneSaves;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (long long)savePolicy;
- (id)savedRecords;
- (void)setMarkAsParticipantNeedsNewInvitationToken:(bool)arg1;
- (void)setPermitNonAtomicZoneSaves:(bool)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setTreatAnyErrorAsFatal:(bool)arg1;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;
- (bool)treatAnyErrorAsFatal;

@end
