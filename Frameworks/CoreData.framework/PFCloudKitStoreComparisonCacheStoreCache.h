
@interface PFCloudKitStoreComparisonCacheStoreCache : NSObject {
    bool  _checkCloudKitMetadata;
    NSNumber * _databaseScopeNumber;
    NSMutableDictionary * _identifierToObjectID;
    NSMutableSet * _identifiers;
    NSString * _identityRecordName;
    NSMutableDictionary * _mtmKeyToMirroredRelationship;
    NSMutableSet * _mtmKeys;
    NSMutableDictionary * _objectIDToRecordID;
    NSMutableDictionary * _objectIDToRecordMetadata;
    NSMutableDictionary * _recordIDToMetadata;
    NSMutableDictionary * _recordIDToObjectID;
    NSMutableDictionary * _recordIDToRelationshipNameToRelatedRecordIDs;
    NSMutableSet * _recordIDs;
    NSMutableDictionary * _recordZoneIDToRecordIDs;
    NSMutableSet * _recordZones;
    NSMutableSet * _sharedRecordZones;
    NSMutableDictionary * _zoneIDToMTMKeys;
}

- (void)dealloc;
- (id)init;

@end
