
@interface CPLFingerprintSchemeV2 : CPLFingerprintScheme {
    NSData * _boundaryKey;
}

@property (nonatomic, readonly) NSData *boundaryKey;

- (void).cxx_destruct;
- (void**)_createSignatureGenerator;
- (bool)allowsStreaming;
- (id)boundaryKey;
- (bool)canMatchSignatureToFingerprint;
- (id)fingerprintSchemeDescription;
- (id)initWithBoundaryKey:(id)arg1;
- (bool)isMMCSv2;

@end
