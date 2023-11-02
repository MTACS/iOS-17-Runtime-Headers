
@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSCopying, NSManagedObjectContextFaultingDelegate> {
    NSMutableSet * _deletedObjectIDs;
    PFUbiquitySwitchboardEntry * _entry;
    PFUbiquityImportContext * _importContext;
    PFUbiquityKnowledgeVector * _initialStoreKnowledgeVector;
    NSMutableSet * _insertedObjectIDs;
    bool  _lockedExistingCoord;
    PFUbiquityKnowledgeVector * _logScore;
    NSManagedObjectContext * _moc;
    NSError * _operationError;
    NSPersistentStoreCoordinator * _psc;
    NSMutableDictionary * _relationshipsToObjectIDsToCheck;
    NSMutableDictionary * _resolvedConflicts;
    bool  _success;
    bool  _transactionDidRollback;
    PFUbiquityTransactionLog * _transactionLog;
    NSMutableSet * _updatedObjectIDs;
    PFUbiquityKnowledgeVector * _updatedStoreKnowledgeVector;
    bool  _wroteKV;
}

@property (readonly, copy) NSString *debugDescription;
@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (void)main;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;

@end
