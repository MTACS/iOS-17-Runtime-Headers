
@interface PFCloudKitMetadataCache : NSObject {
    NSMutableSet * _invalidatedMTMKeys;
    NSMutableSet * _mutableZoneIDs;
    NSMutableDictionary * _objectIDToChangedPropertyKeys;
    NSMutableDictionary * _objectIDToRecordMetadata;
    NSMutableDictionary * _objectIDToRelationshipNameToExistingMTMKeys;
    NSMutableDictionary * _recordIDToMirroredRelationshipOrRecordMetadata;
    NSMutableDictionary * _recordZoneIDToZoneMetadata;
    NSMutableDictionary * _zoneIDToMtmKeyToMirroredRelationship;
}

- (void)dealloc;
- (id)init;

@end
