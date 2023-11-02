
@protocol ICAttachmentCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (NSData *)decryptedFallbackImageData;
- (NSData *)decryptedFallbackPDFData;
- (bool)writeEncryptedFallbackImageData:(NSData *)arg1;
- (bool)writeEncryptedFallbackPDFData:(NSData *)arg1;

@end
