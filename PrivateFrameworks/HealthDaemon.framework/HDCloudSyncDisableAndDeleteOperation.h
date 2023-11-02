
@interface HDCloudSyncDisableAndDeleteOperation : HDCloudSyncOperation

- (id)_createZonesOperationForContainer:(id)arg1;
- (id)_deleteUnifiedZoneRecordsOperationForContainer:(id)arg1 zones:(id)arg2;
- (id)_deleteZonesOperationForContainer:(id)arg1 zones:(id)arg2;
- (bool)_isSecureSecondaryContainer:(id)arg1;
- (id)_leaveSharesOperationForContainer:(id)arg1;
- (void)main;

@end
