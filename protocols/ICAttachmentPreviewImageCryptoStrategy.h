
@protocol ICAttachmentPreviewImageCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (NSData *)decryptedImageData;
- (NSData *)decryptedMetadata;
- (bool)writeEncryptedImageFromData:(NSData *)arg1;
- (void)writeEncryptedMetadata:(NSData *)arg1;

@end
