
@interface UARPTLVTypes : NSObject

@property (readonly, copy) UARPAssetTag *hsModel4cc;
@property (readonly) unsigned long long hsModelDownloaded;
@property (readonly) unsigned long long hsModelEngineCompact;
@property (readonly) unsigned long long hsModelEngineNormal;
@property (readonly) unsigned long long hsModelFallback;
@property (readonly) unsigned long long hsModelPreInstalled;
@property (readonly) unsigned long long hsModelPrimary;
@property (readonly) unsigned long long hsModelTlvModelCertificate;
@property (readonly) unsigned long long hsModelTlvModelDigest;
@property (readonly) unsigned long long hsModelTlvModelEngineType;
@property (readonly) unsigned long long hsModelTlvModelEngineVersion;
@property (readonly) unsigned long long hsModelTlvModelHash;
@property (readonly) unsigned long long hsModelTlvModelLocale;
@property (readonly) unsigned long long hsModelTlvModelRole;
@property (readonly) unsigned long long hsModelTlvModelSignature;
@property (readonly) unsigned long long hsModelTlvModelType;

+ (id)sharedInstance;

- (id)hsModel4cc;
- (unsigned long long)hsModelDownloaded;
- (unsigned long long)hsModelEngineCompact;
- (unsigned long long)hsModelEngineNormal;
- (unsigned long long)hsModelFallback;
- (unsigned long long)hsModelPreInstalled;
- (unsigned long long)hsModelPrimary;
- (unsigned long long)hsModelTlvModelCertificate;
- (unsigned long long)hsModelTlvModelDigest;
- (unsigned long long)hsModelTlvModelEngineType;
- (unsigned long long)hsModelTlvModelEngineVersion;
- (unsigned long long)hsModelTlvModelHash;
- (unsigned long long)hsModelTlvModelLocale;
- (unsigned long long)hsModelTlvModelRole;
- (unsigned long long)hsModelTlvModelSignature;
- (unsigned long long)hsModelTlvModelType;

@end
