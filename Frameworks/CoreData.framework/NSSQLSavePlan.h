
@interface NSSQLSavePlan : NSObject {
    struct __CFDictionary { } * _changeCache;
    struct __CFDictionary { } * _deletedFOKRowsInCurrentSave;
    NSMutableArray * _externalDataReferencesToDelete;
    NSMutableArray * _externalDataReferencesToSave;
    NSMutableArray * _fileBackedFuturesToCopy;
    NSMutableArray * _fileBackedFuturesToDelete;
    struct _sqlSaveFlags { 
        unsigned int notifyFOKChanges : 1; 
        unsigned int hasChanges : 1; 
        unsigned int reserved : 30; 
    }  _flags;
    struct __CFDictionary { } * _insertCache;
    NSMutableSet * _objectIDsToRemoveFromRowCache;
    NSSQLSaveChangesRequestContext * _requestContext;
    NSMutableSet * _rowsToAddToRowCache;
    NSMutableArray * _rowsToDelete;
    struct __CFDictionary { } * _toManyCache;
    NSMutableDictionary * _toManyRelationshipChanges;
    int  _transactionInMemorySequence;
    NSMutableSet * _updatedByForeignKey;
    NSMutableSet * _updatedByRequest;
    struct __CFDictionary { } * _updatedFOKRowsInCurrentSave;
    NSMutableDictionary * _usedIndexes;
}

- (void)dealloc;
- (id)initForRequestContext:(id)arg1;

@end
