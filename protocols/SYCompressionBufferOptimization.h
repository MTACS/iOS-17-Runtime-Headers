
@protocol SYCompressionBufferOptimization <NSObject>

@required

- (unsigned long long)inputBufferSize;
- (unsigned long long)outputBufferSize;
- (void)setInputBufferSize:(unsigned long long)arg1;
- (void)setOutputBufferSize:(unsigned long long)arg1;

@end
