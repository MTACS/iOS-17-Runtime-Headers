
@interface CKVReplicatedStateEnumerator : NSObject {
    NSMutableDictionary * _commandCache;
    NSObject<CKVDatabaseReadOnlyAccess> * _databaseAccess;
    NSNumber * _datasetRowId;
    NSMutableDictionary * _deviceRowIdMap;
    long long  _itemType;
    NSString * _localDeviceIdString;
    NSNumber * _localDeviceRowId;
    NSString * _originAppId;
    NSString * _userId;
    NSNumber * _userIdHash;
}

+ (id)_wrapContent:(id)arg1;
+ (id)_wrapInstanceWithContent:(id)arg1 metaContent:(id)arg2;

- (void).cxx_destruct;
- (id)_contentHashesFromProvenanceRecords:(id)arg1;
- (id)_createProvenanceSelectCommandFromVector:(id)arg1 atomState:(unsigned char)arg2 columns:(id)arg3 originAppId:(id)arg4 itemType:(long long)arg5;
- (id)_fetchDeviceRecordsFromDatabase:(id)arg1;
- (id)_fetchItemContentFromContentIdentitifier:(id)arg1 databaseAccess:(id)arg2;
- (id)_fetchItemContentRecordsFromCommand:(id)arg1;
- (id)_fetchItemMetaContentFromMetaContentIdentities:(id)arg1 databaseAccess:(id)arg2;
- (id)_fetchProvenanceRecordsFromDatabase:(id)arg1 originAppId:(id)arg2 itemType:(long long)arg3;
- (id)_findDatasetFromItemType:(long long)arg1 originAppId:(id)arg2;
- (id)_findProvenanceRecordsFromCommand:(id)arg1;
- (id)_mapDeviceRecords:(id)arg1;
- (id)_mapToDeviceContentFromProvenanceRecords:(id)arg1;
- (id)_mapToDeviceIdentifiersFromProvenance:(id)arg1;
- (id)_stateVectorFromProvenanceRecords:(id)arg1 deviceRecordMap:(id)arg2;
- (id)allLocalMetaContentIdentifersForContentIdentifier:(id)arg1 originAppId:(id)arg2 itemType:(long long)arg3;
- (id)buildDatasetChangeFromEntityEnumerationRecord:(id)arg1;
- (id)extractStateVectorTimestampsForItemType:(long long)arg1 originAppId:(id)arg2;
- (id)findContentHashesNotInState:(unsigned char)arg1 from:(id)arg2 originAppId:(id)arg3 itemType:(long long)arg4;
- (id)findItemDataPresentInVector:(id)arg1 missingFromVector:(id)arg2 originAppId:(id)arg3 itemType:(long long)arg4;
- (id)findItemsBasedOnVector:(id)arg1 state:(unsigned char)arg2 originAppId:(id)arg3 itemType:(long long)arg4;
- (id)findTimestampsAssociatedWithContentHash:(id)arg1 originAppId:(id)arg2 itemType:(long long)arg3;
- (id)initWithUserId:(id)arg1 originAppId:(id)arg2 itemType:(long long)arg3;
- (id)initWithUserId:(id)arg1 originAppId:(id)arg2 itemType:(long long)arg3 indexManager:(id)arg4;
- (id)localDeviceIdentifier;

@end
