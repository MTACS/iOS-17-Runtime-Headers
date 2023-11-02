
@interface PFCKRecordConflictResolver : NSObject {
    NSMutableDictionary * _allParticipantsByID;
    CKShare * _ancestorRecord;
    CKShare * _clientRecord;
    NSPersistentContainer * _container;
    NSMutableDictionary * _participantObjectIDsByParticipantID;
    NSMutableDictionary * _recordIDToObjectID;
    CKShare * _resolvedRecord;
    CKShare * _serverRecord;
}

- (void)dealloc;
- (id)initWithAncestorRecord:(id)arg1 serverRecord:(id)arg2 clientRecord:(id)arg3;

@end
