
@protocol HMDCloudShareTrustManagerDataSource <NSObject>

@required

- (bool)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 shouldShareTrustWithUser:(HMDUser *)arg2;
- (HMDHome *)homeForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (bool)isOwnerCapableForTrustManager:(HMDCloudShareTrustManager *)arg1;
- (HMDUser *)ownerForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (NSString *)zoneNameForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;

@end
