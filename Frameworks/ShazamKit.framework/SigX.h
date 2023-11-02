
@interface SigX : NSObject {
    void * _mySigX;
    id /* block */  _spectralOutputHandler;
}

@property (nonatomic) void*mySigX;
@property (nonatomic, copy) id /* block */ spectralOutputHandler;

+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })getVersion;

- (bool)ConvertException:(const struct exception { int (**x1)(); }*)arg1 toError:(id*)arg2;
- (bool)ConvertSystemError:(const struct system_error { int (**x1)(); struct __libcpp_refstring { char *x_2_1_1; } x2; struct error_code { int x_3_1_1; struct error_category {} *x_3_1_2; } x3; }*)arg1 toError:(id*)arg2;
- (bool)FillUnknownError:(id*)arg1;
- (void)dealloc;
- (void)disableSpectralOutput;
- (void)enableSpectralOutputForNumberOfFrequencyBins:(int)arg1 callbackFrequency:(int)arg2 completionHandler:(id /* block */)arg3;
- (bool)flowBuffer:(id)arg1 error:(id*)arg2;
- (bool)flowFloatSamples:(float*)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id*)arg4;
- (bool)flowFloatSamples:(float*)arg1 sampleCount:(int)arg2 error:(id*)arg3;
- (bool)flowIntSamples:(short*)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id*)arg4;
- (bool)flowIntSamples:(const short*)arg1 sampleCount:(int)arg2 error:(id*)arg3;
- (bool)getSignature:(void*)arg1 error:(id*)arg2;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 signatureOptions:(int)arg3 error:(id*)arg4;
- (void*)mySigX;
- (bool)resetWithError:(id*)arg1;
- (void)setMySigX:(void*)arg1;
- (bool)setRollingBufferSeconds:(float)arg1 error:(id*)arg2;
- (void)setSpectralOutputHandler:(id /* block */)arg1;
- (id /* block */)spectralOutputHandler;

@end
