
@protocol ICMediaCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (NSData *)decryptedData;

@end
