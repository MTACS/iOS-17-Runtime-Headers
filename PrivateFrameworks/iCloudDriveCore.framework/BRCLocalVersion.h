
@interface BRCLocalVersion : BRCVersion {
    BRCItemGlobalID * _previousItemGlobalID;
    NSError * _uploadError;
    CKRecord * _uploadedAssets;
}

@property (nonatomic, retain) BRCItemGlobalID *previousItemGlobalID;
@property (nonatomic, retain) NSError *uploadError;
@property (nonatomic, retain) CKRecord *uploadedAssets;

- (void).cxx_destruct;
- (void)_clearSignatures:(unsigned long long)arg1 isPackage:(bool)arg2;
- (void)clearUploadedAssets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (id)initForPackage:(bool)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithLocalVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (bool)isMissingUploadsWithDiffs:(unsigned long long)arg1 isDocumentSyncPaused:(bool)arg2 isDocumentResumingSync:(bool)arg3;
- (id)isPackageObj;
- (id)previousItemGlobalID;
- (void)setPreviousItemGlobalID:(id)arg1;
- (void)setUploadError:(id)arg1;
- (void)setUploadedAssets:(id)arg1;
- (bool)shouldRecreateUploadJobGivenDiffs:(unsigned long long)arg1;
- (id)sizeObj;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)updateFromFSAtPath:(id)arg1 filenameOverride:(id)arg2;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(bool)arg2 filenameOverride:(id)arg3;
- (void)updateServerFieldsFromVersion:(id)arg1;
- (id)uploadError;
- (id)uploadedAssets;

@end
