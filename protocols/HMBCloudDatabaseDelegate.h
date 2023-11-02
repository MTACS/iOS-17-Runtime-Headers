
@protocol HMBCloudDatabaseDelegate <NSObject>

@optional

- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didChangeManateeKeysForZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didCreateZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didRemoveZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 encounteredError:(NSError *)arg2 withOperation:(CKOperation *)arg3 onContainer:(CKContainerID *)arg4;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 encounteredError:(NSError *)arg2 withOperation:(CKOperation *)arg3 onZone:(HMBCloudZoneID *)arg4;
- (NAFuture *)cloudDatabase:(HMBCloudDatabase *)arg1 willRemoveZoneWithID:(HMBCloudZoneID *)arg2;

@end
