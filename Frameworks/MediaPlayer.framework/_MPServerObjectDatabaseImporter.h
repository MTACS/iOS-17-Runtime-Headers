
@interface _MPServerObjectDatabaseImporter : NSObject <MPServerObjectDatabaseOperations> {
    MSVSQLStatement * _insertAssetURLStatement;
    MSVSQLStatement * _insertHLSAssetURLStatement;
    MSVSQLStatement * _insertObjectRelationshipStatement;
    MSVSQLStatement * _insertObjectStatement;
    MSVSQLStatement * _insertPlaybackAuthorizationTokenStatement;
    MSVSQLStatement * _removeRelationshipsStatement;
    MSVSQLStatement * _selectExistingObjectStatement;
    MSVSQLDatabaseTransaction * _transaction;
    MSVSQLStatement * _updateAssetURLStatement;
    MSVSQLStatement * _updateMiniSINFStatement;
    MSVSQLStatement * _updateSINFStatement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_existingAssetMatchingIdentifier:(id)arg1 hashedPersonID:(id)arg2 flavor:(long long)arg3;
- (id)_existingHLSAssetMatchingIdentifier:(id)arg1 hashedPersonID:(id)arg2;
- (bool)_importAssetFullSINF:(id)arg1 forIdentifier:(id)arg2 hashedPersonID:(id)arg3 flavor:(long long)arg4;
- (bool)_importAssetMiniSINF:(id)arg1 forIdentifier:(id)arg2 hashedPersonID:(id)arg3 flavor:(long long)arg4;
- (void)dealloc;
- (bool)importAssetSinf:(id)arg1 type:(long long)arg2 forIdentifier:(id)arg3 hashedPersonID:(id)arg4 flavor:(long long)arg5 sinfPayload:(id)arg6;
- (bool)importAssetURL:(id)arg1 forIdentifiers:(id)arg2 flavor:(long long)arg3 expirationDate:(id)arg4;
- (bool)importHLSAssetURL:(id)arg1 keyCertificateURL:(id)arg2 keyServerURL:(id)arg3 redeliveryId:(long long)arg4 protocolType:(id)arg5 isiTunesStoreStream:(bool)arg6 forIdentifiers:(id)arg7 expirationDate:(id)arg8;
- (bool)importObject:(id)arg1 type:(id)arg2 identifiers:(id)arg3 source:(long long)arg4 expiration:(id)arg5;
- (bool)importPlaybackAuthorizationToken:(id)arg1 identifiers:(id)arg2 source:(long long)arg3 type:(id)arg4 expirationDate:(id)arg5 trustID:(id)arg6;
- (bool)relateIdentifiers:(id)arg1 toParentIdentifiers:(id)arg2 parentVersionHash:(id)arg3 childKey:(id)arg4 order:(long long)arg5;
- (bool)removeRelationshipsForParentIdentifiers:(id)arg1 childKey:(id)arg2;

@end
