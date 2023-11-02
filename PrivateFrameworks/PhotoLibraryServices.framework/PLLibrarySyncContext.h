
@interface PLLibrarySyncContext : NSObject <PLSyncContext> {
    NSMutableDictionary * _assetAdjustmentStatesByCloudIdentifier;
    PLPhotoLibrary * _photoLibrary;
    PLCloudRecordOrganizer * _recordOrganizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLCloudRecordOrganizer *recordOrganizer;
@property (nonatomic, readonly) bool serverSupportsGraphHome;
@property (nonatomic, readonly) bool serverSupportsVision;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetAdjustmentStateForCloudIdentifier:(id)arg1;
- (void)deleteFaces:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)makeFace;
- (id)personForUUID:(id)arg1;
- (bool)personUUIDIsDeleted:(id)arg1;
- (id)photoLibrary;
- (id)recordOrganizer;
- (bool)serverSupportsGraphHome;
- (bool)serverSupportsVision;
- (void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2;

@end
