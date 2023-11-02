
@protocol HMDCloudShareTrustManagerDelegate <NSObject>

@required

- (void)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 didFetchOwnerCloudShareID:(HMBShareUserID *)arg2;
- (void)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 didRemoveUserWithUUID:(NSUUID *)arg2;
- (void)didFinishConfiguringForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (void)didRemoveTrustZoneInCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;

@end
