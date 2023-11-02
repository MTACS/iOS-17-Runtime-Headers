
@interface IMTranscriptionUtilities : NSObject

+ (void)commitTranscriptionWithString:(id)arg1 confidenceSum:(double)arg2 numberOfSegments:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (id)localizedSeparatorString;
+ (id)transcoderBundle;
+ (void)transcribeAudioForAudioTransferURL:(id)arg1 withCompletion:(id /* block */)arg2;

@end
