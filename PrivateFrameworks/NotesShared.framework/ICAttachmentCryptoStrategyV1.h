
@interface ICAttachmentCryptoStrategyV1 : ICCloudSyncingObjectCryptoStrategyV1 <ICAttachmentCryptoStrategy>

@property (nonatomic, readonly) bool canAuthenticate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPassphraseSet;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long intrinsicNotesVersion;
@property (nonatomic, readonly) bool isAuthenticated;
@property (nonatomic, readonly, copy) NSString *passphraseHint;
@property (readonly) Class superclass;

- (id)decryptedFallbackAssetDataForFallbackAssetType:(long long)arg1;
- (id)decryptedFallbackImageData;
- (id)decryptedFallbackPDFData;
- (bool)rewrapWithMainKey:(id)arg1;
- (bool)writeEncryptedFallbackAssetData:(id)arg1 fallbackAssetType:(long long)arg2;
- (bool)writeEncryptedFallbackImageData:(id)arg1;
- (bool)writeEncryptedFallbackPDFData:(id)arg1;

@end
