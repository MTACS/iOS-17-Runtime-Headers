
@interface PFCloudKitImportZoneContext : NSObject {
    NSArray * _deletedMirroredRelationshipRecordIDs;
    NSSet * _deletedObjectIDs;
    NSDictionary * _deletedRecordTypeToRecordID;
    NSArray * _deletedRelationships;
    NSSet * _deletedShareRecordIDs;
    NSURL * _fileBackedFuturesDirectory;
    NSArray * _importOperations;
    NSMutableArray * _metadatasToLink;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSArray * _modifiedRecords;
    NSMutableDictionary * _recordTypeToRecordIDToObjectID;
    NSMutableDictionary * _recordTypeToUnresolvedRecordIDs;
    NSArray * _updatedRecords;
    NSMutableArray * _updatedRelationships;
}

- (void)dealloc;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4;

@end
