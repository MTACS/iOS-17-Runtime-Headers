
@interface PFUbiquityStoreSaveSnapshot : NSObject {
    NSMutableDictionary * _deletedObjects;
    NSMutableDictionary * _entityNameToIndex;
    NSMutableArray * _entityNames;
    NSString * _exportingPeerID;
    NSArray * _filesDeletedInTransaction;
    NSMutableArray * _filesInsertedInTransaction;
    PFUbiquityGlobalObjectIDCache * _gidCache;
    NSMutableDictionary * _globalObjectIDToIndex;
    NSMutableDictionary * _globalObjectIDToPermanentManagedObjectID;
    NSMutableArray * _globalObjectIDs;
    NSMutableDictionary * _insertedObjects;
    NSString * _localPeerID;
    NSMutableDictionary * _managedObjectIDToGlobalObjectID;
    NSMutableDictionary * _peerIDToIndex;
    NSMutableArray * _peerIDs;
    NSMutableDictionary * _peerStates;
    NSMutableDictionary * _primaryKeyToIndex;
    NSMutableArray * _primaryKeys;
    NSObject<OS_dispatch_queue> * _queue;
    PFUbiquityKnowledgeVector * _storeKV;
    NSNumber * _transactionNumber;
    NSMutableDictionary * _updatedObjects;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initForExport:(id)arg1;
- (id)initWithExportingPeerID:(id)arg1;

@end
