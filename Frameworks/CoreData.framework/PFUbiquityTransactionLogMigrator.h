
@interface PFUbiquityTransactionLogMigrator : NSObject {
    NSManagedObjectModel * _dstModel;
    NSString * _localPeerID;
    NSMappingModel * _mappingModel;
    NSDictionary * _mappingsByEntityName;
    NSSet * _removedEntities;
    NSManagedObjectModel * _srcModel;
    bool  _throttleLogs;
}

- (id)createDestinationObjectContentFromSourceObjectContent:(id)arg1 withEntityMapping:(id)arg2 migrationContext:(id)arg3;
- (id)createDestinationObjectsFromSourceObjects:(id)arg1 migrationContext:(id)arg2;
- (void)dealloc;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 localPeerID:(id)arg4;
- (void)populateMappingsByEntityName;

@end
