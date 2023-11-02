
@interface PFUbiquityRecordImportConflict : NSObject {
    NSDate * _conflictLogDate;
    NSDictionary * _conflictingLogContent;
    PFUbiquityKnowledgeVector * _conflictingLogKnowledgeVector;
    NSNumber * _conflictingLogTransactionNumber;
    int  _conflictingLogTransactionType;
    NSString * _conflictingObjectGlobalIDStr;
    PFUbiquityKnowledgeVector * _currentKnowledgeVector;
    NSDictionary * _globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext * _importContext;
    NSMutableDictionary * _relationshipsToObjectIDsToCheck;
    NSManagedObject * _sourceObject;
    NSArray * _transactionHistory;
}

+ (void)initialize;

- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)init;

@end
