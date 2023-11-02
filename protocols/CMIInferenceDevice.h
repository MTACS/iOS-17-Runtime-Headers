
@protocol CMIInferenceDevice <NSObject>

@required

- (<CMIInferenceExecutionStream> *)createExecutionStream;
- (<CMIInferenceNetwork> *)loadNetworkWithPath:(NSString *)arg1;

@end
