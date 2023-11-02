
@interface CPLFingerprintScheme : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _zeroByteFileFingerprint;
    long long  _zeroByteFileFingerprintOnce;
}

@property (nonatomic, readonly) bool allowsStreaming;
@property (nonatomic, readonly) NSString *fingerprintSchemeDescription;
@property (nonatomic, readonly) bool isMMCSv2;
@property (nonatomic, readonly) NSString *zeroByteFileFingerprint;

+ (id)_fingerprintSchemeForSignature:(id)arg1;
+ (void)configureDefaultFingerprintSchemeForUniverseWithName:(id)arg1;
+ (id)defaultFingerprintSchemeForUnknownRecord;
+ (id)defaultFingerprintSchemeV1;
+ (id)defaultFingerprintSchemeV2;
+ (id)fingerprintSchemeForFingerprint:(id)arg1;
+ (id)fingerprintSchemeForMasterIdentifier:(id)arg1;
+ (id)fingerprintSchemeForNewMasterAsset;
+ (id)fingerprintSchemeForSignature:(id)arg1;
+ (void)initialize;
+ (bool)isMMCSv2Fingerprint:(id)arg1;
+ (bool)isMMCSv2Signature:(id)arg1;
+ (id)nonPrivateFingerprintScheme;
+ (id)normalizeBoundaryKey:(id)arg1;
+ (void)setDefaultFingerprintSchemeV2:(id)arg1;
+ (void)setFingerprintSchemeForNewMasterAsset:(id)arg1;

- (void).cxx_destruct;
- (void**)_createSignatureGenerator;
- (bool)allowsStreaming;
- (bool)canMatchSignatureToFingerprint;
- (id)fingerPrintForData:(id)arg1 error:(id*)arg2;
- (id)fingerPrintForFD:(int)arg1 error:(id*)arg2;
- (id)fingerPrintForFileAtURL:(id)arg1 error:(id*)arg2;
- (id)fingerprintSchemeDescription;
- (id)init;
- (bool)isMMCSv2;
- (id)zeroByteFileFingerprint;

@end
