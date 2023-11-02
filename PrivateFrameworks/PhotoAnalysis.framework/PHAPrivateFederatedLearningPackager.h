
@interface PHAPrivateFederatedLearningPackager : NSObject {
    NSNumber * _clippingNorm;
    DESPFLEncryptor * _encryptor;
    NSNumber * _normBinCount;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _privacyIdentifierLargeRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _privacyIdentifierRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _privacyIdentifierSmallRange;
}

@property (nonatomic, readonly) NSNumber *clippingNorm;
@property (nonatomic, retain) DESPFLEncryptor *encryptor;
@property (nonatomic, readonly) NSNumber *normBinCount;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } privacyIdentifierLargeRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } privacyIdentifierRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } privacyIdentifierSmallRange;

- (void).cxx_destruct;
- (bool)_addNoiseToPrePackagedResults:(float*)arg1 elementsCount:(id)arg2 shouldAddNoise:(bool)arg3 error:(id*)arg4;
- (bool)_callPFLPrivatizeCustomNorm:(float*)arg1 elementsCount:(id)arg2 clippingNorm:(id)arg3 normBinCount:(id)arg4 privacyIdentifier:(id)arg5;
- (id)_encryptFlattenedTrainingResults:(float*)arg1 elementsCount:(long long)arg2 withEncryptionKey:(id)arg3 shouldEncrypt:(bool)arg4 error:(id*)arg5;
- (id)_flattenTrainingResults:(id)arg1;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;
- (id)clippingNorm;
- (id)dataPackageFromTrainingResults:(id)arg1 withEncryptionKey:(id)arg2 shouldAddNoise:(bool)arg3 shouldEncrypt:(bool)arg4 error:(id*)arg5;
- (id)encryptor;
- (id)initWithClippingNorm:(id)arg1 normBinCount:(id)arg2;
- (id)normBinCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })privacyIdentifierLargeRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })privacyIdentifierRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })privacyIdentifierSmallRange;
- (void)setEncryptor:(id)arg1;

@end
