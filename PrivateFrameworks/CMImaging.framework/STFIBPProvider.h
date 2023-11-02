
@interface STFIBPProvider : NSObject

+ (id)STFStillIBPForVersion:(unsigned int)arg1;
+ (id)STFVideoProcessorForVersion:(unsigned int)arg1 ringBufferSize:(unsigned int)arg2 historySize:(unsigned int)arg3 cmdQueue:(id)arg4;

@end
