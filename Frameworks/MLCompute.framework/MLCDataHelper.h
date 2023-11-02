
@interface MLCDataHelper : NSObject

+ (bool)convertFp16toFp32:(unsigned long long)arg1 fp16Values:(const /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg2 fp32Values:(float*)arg3;
+ (bool)convertFp32toFp16:(unsigned long long)arg1 fp32Values:(const float*)arg2 fp16Values:(/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg3;
+ (bool)convertOIHWtoIOHW:(id)arg1 sourceOIHW:(const void*)arg2 resultIOHW:(void*)arg3 inputFeatureChannelCount:(unsigned long long)arg4 outputFeatureChannelCount:(unsigned long long)arg5;
+ (bool)convertSourceHWIO:(const void*)arg1 toResultOIHW:(void*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 inputFeatureChannelCount:(unsigned long long)arg5 outputFeatureChannelCount:(unsigned long long)arg6 dataType:(int)arg7;
+ (bool)convertSourceHWOI:(const void*)arg1 toResultOIHW:(void*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 inputFeatureChannelCount:(unsigned long long)arg5 outputFeatureChannelCount:(unsigned long long)arg6 dataType:(int)arg7;
+ (bool)convertSourceOIHW:(const void*)arg1 toResultHWIO:(void*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 inputFeatureChannelCount:(unsigned long long)arg5 outputFeatureChannelCount:(unsigned long long)arg6 dataType:(int)arg7;
+ (bool)convertSourceOIHW:(const void*)arg1 toResultHWOI:(void*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 inputFeatureChannelCount:(unsigned long long)arg5 outputFeatureChannelCount:(unsigned long long)arg6 dataType:(int)arg7;
+ (void)copySource:(const void*)arg1 toTarget:(void*)arg2 sourceOffset:(unsigned long long)arg3 targetOffset:(unsigned long long)arg4 sizeToCopy:(unsigned long long)arg5;
+ (id)createDataWithFloatValue:(float)arg1 count:(unsigned long long)arg2;
+ (void)fillData:(id)arg1 withFloatValue:(float)arg2;

@end
