
@protocol PLSyncContext <NSObject>

@required

- (NSDictionary *)assetAdjustmentStateForCloudIdentifier:(NSString *)arg1;
- (void)deleteFaces:(id <NSFastEnumeration>)arg1;
- (<PLSyncableDetectedFace> *)makeFace;
- (<PLSyncablePerson> *)personForUUID:(NSString *)arg1;
- (bool)personUUIDIsDeleted:(NSString *)arg1;
- (bool)serverSupportsGraphHome;
- (bool)serverSupportsVision;

@end
