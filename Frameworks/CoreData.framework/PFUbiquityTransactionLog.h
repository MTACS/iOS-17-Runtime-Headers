
@interface PFUbiquityTransactionLog : NSObject {
    NSMutableDictionary * _contents;
    NSRecursiveLock * _contentsLock;
    NSString * _fileProtectionOption;
    bool  _inPermanentLocation;
    bool  _inStagingLocation;
    bool  _inTemporaryLocation;
    PFUbiquityKnowledgeVector * _knowledgeVector;
    bool  _loadUsingRetry;
    bool  _loadedComparisonMetadata;
    bool  _loadedContents;
    bool  _loadedDeletedObjectData;
    bool  _loadedImportMetadata;
    bool  _loadedInsertedObjectData;
    bool  _loadedUpdatedObjectData;
    NSString * _localPeerID;
    PFUbiquitySaveSnapshot * _saveSnapshot;
    PFUbiquityLocation * _stagingTransactionLogLocation;
    PFUbiquityLocation * _temporaryTransactionLogLocation;
    PFUbiquityLocation * _transactionLogLocation;
    int  _transactionLogType;
    bool  _useTemporaryLogLocation;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithStoreName:(id)arg1 andSaveSnapshot:(id)arg2 andRootLocation:(id)arg3;
- (id)initWithTransactionLogLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithTransactionLogURL:(id)arg1 ubiquityRootLocation:(id)arg2 andLocalPeerID:(id)arg3;

@end
