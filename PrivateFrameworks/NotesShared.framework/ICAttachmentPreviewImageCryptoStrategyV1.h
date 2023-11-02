
@interface ICAttachmentPreviewImageCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAttachmentPreviewImageCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;

- (id)_decryptedImageData;
- (id)decryptedImageData;
- (id)decryptedMetadata;
- (bool)writeEncryptedImageFromData:(id)arg1;
- (void)writeEncryptedMetadata:(id)arg1;

@end
