
@interface TCMLCHARDescriptor : NSObject

+ (id)defineGraphConvDescriptor:(id)arg1 inputChannels:(unsigned long long)arg2 outputChannels:(unsigned long long)arg3 numKeypoints:(unsigned long long)arg4 temporalKernelSize:(unsigned long long)arg5 stride:(unsigned long long)arg6 dropout:(float)arg7;
+ (id)defineResidualDescriptor:(id)arg1 inputChannels:(unsigned long long)arg2 outputChannels:(unsigned long long)arg3 stride:(unsigned long long)arg4;
+ (id)defineSTGCNActionDescriptor:(id)arg1 inputChannels:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 numFrames:(unsigned long long)arg4 numKeypoints:(unsigned long long)arg5 numClass:(unsigned long long)arg6 dropout:(float)arg7;
+ (id)defineSTGCNDescriptor:(id)arg1 inputChannels:(unsigned long long)arg2 outputChannels:(unsigned long long)arg3 numKeypoints:(unsigned long long)arg4 temporalKernelSize:(unsigned long long)arg5 stride:(unsigned long long)arg6 dropout:(float)arg7 residual:(bool)arg8;
+ (id)defineTemporalConvolutionalNetworkDescriptor:(id)arg1 channels:(unsigned long long)arg2 temporalKernelSize:(unsigned long long)arg3 stride:(unsigned long long)arg4 dropout:(float)arg5;

@end
