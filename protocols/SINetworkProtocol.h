
@protocol SINetworkProtocol <NSObject>

@required

- (void)addPrewiringBuffersToStreamForFunctionName:(NSString *)arg1 inputPools:(NSDictionary *)arg2 outputPools:(NSDictionary *)arg3 clearWiredBuffer:(bool)arg4;
- (unsigned long long)getInputChannels:(NSString *)arg1;
- (unsigned long long)getInputHeight:(NSString *)arg1;
- (unsigned long long)getInputLength:(NSString *)arg1;
- (unsigned long long)getInputWidth:(NSString *)arg1;
- (NSArray *)getOpsForLibrary;
- (unsigned long long)getOutputBytePerRow:(NSString *)arg1;
- (unsigned long long)getOutputChannels:(NSString *)arg1;
- (unsigned long long)getOutputComponentSize:(NSString *)arg1;
- (unsigned long long)getOutputHeight:(NSString *)arg1;
- (unsigned long long)getOutputLength:(NSString *)arg1;
- (unsigned long long)getOutputRowElements:(NSString *)arg1;
- (unsigned long long)getOutputWidth:(NSString *)arg1;
- (void*)getRawOutput:(NSString *)arg1;
- (id)initWithNetworkConfiguration:(SINetworkConfiguration *)arg1;
- (NSString *)networkVersion;
- (bool)prepare;
- (bool)runNetwork;
- (bool)setInput:(NSString *)arg1 fromCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)setInput:(NSString *)arg1 fromRawPointer:(const void*)arg2;
- (bool)setOutputBlob:(NSString *)arg1 forOutputSurface:(struct __IOSurface { }*)arg2;
- (bool)supportFloat16IO;
- (bool)supportZeroCopyOutput;
- (bool)switchConfiguration:(NSString *)arg1;
- (void)unwirePrewiringBuffers;
- (void)unwirePrewiringBuffersForFunctionName:(NSString *)arg1;

@end
