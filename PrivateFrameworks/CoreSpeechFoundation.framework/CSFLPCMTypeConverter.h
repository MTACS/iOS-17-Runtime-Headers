
@interface CSFLPCMTypeConverter : NSObject

+ (void)apply12dBGainToFloatBuffer:(id)arg1;
+ (void)apply12dBGainToShortBuffer:(id)arg1;
+ (void)applyGain:(float)arg1 toFloatBuffer:(id)arg2;
+ (void)applyGain:(float)arg1 toShortBuffer:(id)arg2;
+ (void)applyNegative20dBGainToFloatBuffer:(id)arg1;
+ (void)applyNegative20dBGainToShortBuffer:(id)arg1;
+ (void)applyNegative32dBGainToFloatBuffer:(id)arg1;
+ (void)applyNegative32dBGainToShortBuffer:(id)arg1;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;

@end
