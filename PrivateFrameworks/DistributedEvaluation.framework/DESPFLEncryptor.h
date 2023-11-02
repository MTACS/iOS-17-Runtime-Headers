
@interface DESPFLEncryptor : NSObject {
    NSString * _privatizationIdentifier;
    id /* block */  _privatizer;
    id /* block */  _privatizerWithCustomParameters;
    NSDictionary * _recipeUserInfo;
    long long  _version;
    double  _weight;
    bool  _writeToSubmissionLogs;
}

@property (nonatomic, readonly) bool pluginShouldAddNoiseAndEncryptResult;
@property (nonatomic, copy) NSString *privatizationIdentifier;
@property (nonatomic, copy) id /* block */ privatizer;
@property (nonatomic, copy) id /* block */ privatizerWithCustomParameters;
@property (nonatomic) long long version;
@property (nonatomic) double weight;
@property (nonatomic, readonly) bool writeToSubmissionLogs;

+ (bool)privatizationSupported;

- (void).cxx_destruct;
- (id)_encryptedAndPrivatizedDataWithPublicKey:(id)arg1 separatedDPParameter:(id)arg2 inPlaceNumbers:(float*)arg3 count:(unsigned long long)arg4 error:(id*)arg5;
- (id)_encryptedDataWithPublicKey:(id)arg1 inPlaceDataFloatNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)_encryptedDataWithPublicKey:(id)arg1 noiseable:(id)arg2 error:(id*)arg3;
- (void)_maybeQuantizeDataTransportOfNoisable:(id)arg1;
- (id)_newNoiseable;
- (id)_requestedTransport;
- (id)encryptAndPrivatizeDataWithRecipe:(id)arg1 numbers:(float*)arg2 count:(unsigned long long)arg3 inPlace:(bool)arg4 error:(id*)arg5;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 inPlaceNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 numbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)encryptedDataWithPublicKey:(id)arg1 dataFloatNumbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 dataNumbers:(const double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataFloatNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataNumbers:(double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithRecipe:(id)arg1;
- (id)initWithRecipeUserInfo:(id)arg1;
- (id)initWithRecipeUserInfo:(id)arg1 writeToSubmissionLogs:(bool)arg2;
- (bool)pluginShouldAddNoiseAndEncryptResult;
- (id)privatizationIdentifier;
- (id /* block */)privatizer;
- (id /* block */)privatizerWithCustomParameters;
- (void)setPrivatizationIdentifier:(id)arg1;
- (void)setPrivatizer:(id /* block */)arg1;
- (void)setPrivatizerWithCustomParameters:(id /* block */)arg1;
- (void)setVersion:(long long)arg1;
- (void)setWeight:(double)arg1;
- (long long)version;
- (double)weight;
- (bool)writeToSubmissionLogs;

@end
