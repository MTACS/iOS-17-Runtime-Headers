
@interface DIConvertParams : DIBaseParams {
    NSString * _certificate;
    DICreateParams * _createParams;
    unsigned long long  _encryptionMethod;
    bool  _inPlaceConversion;
    unsigned long long  _maxRawUDIFRunSize;
    long long  _outputFormat;
    DIURL * _outputURL;
    bool  _passphrase;
    NSString * _publicKey;
    unsigned long long  _sparseBundleBandSize;
}

@property (nonatomic, copy) NSString *certificate;
@property (nonatomic, retain) DICreateParams *createParams;
@property (nonatomic) unsigned long long encryptionMethod;
@property (nonatomic, readonly) bool inPlaceConversion;
@property (nonatomic) unsigned long long maxRawUDIFRunSize;
@property (nonatomic) long long outputFormat;
@property (nonatomic, copy) DIURL *outputURL;
@property (nonatomic) bool passphrase;
@property (nonatomic, copy) NSString *publicKey;
@property (nonatomic) bool shouldValidateShadows;
@property (nonatomic) unsigned long long sparseBundleBandSize;

+ (bool)isUDIFWithFormat:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificate;
- (bool)convertWithError:(id*)arg1;
- (id)copyUpdatedOutputURLWithError:(id*)arg1;
- (id)createParams;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)encryptionMethod;
- (bool)inPlaceConversion;
- (id)initForInplaceWithExistingParams:(id)arg1 error:(id*)arg2;
- (id)initForInplaceWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 error:(id*)arg3;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 shadowURLs:(id)arg3 error:(id*)arg4;
- (void)invalidate;
- (unsigned long long)maxRawUDIFRunSize;
- (long long)outputFormat;
- (id)outputURL;
- (bool)passphrase;
- (id)publicKey;
- (void)setCertificate:(id)arg1;
- (void)setCreateParams:(id)arg1;
- (void)setEncryptionMethod:(unsigned long long)arg1;
- (void)setMaxRawUDIFRunSize:(unsigned long long)arg1;
- (void)setOutputFormat:(long long)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setPassphrase:(bool)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setShouldValidateShadows:(bool)arg1;
- (void)setSparseBundleBandSize:(unsigned long long)arg1;
- (bool)shouldValidateShadows;
- (unsigned long long)sparseBundleBandSize;
- (bool)validateDeserializationWithError:(id*)arg1;
- (bool)validateFileWithURL:(id)arg1 error:(id*)arg2;

@end
