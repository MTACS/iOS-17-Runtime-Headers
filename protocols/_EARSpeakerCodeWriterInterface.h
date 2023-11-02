
@protocol _EARSpeakerCodeWriterInterface <NSObject>

@required

- (void)setTrainingSpeakerCode:(NSString *)arg1 inferenceSpeakerCode:(NSString *)arg2 accumulatedGradient:(NSString *)arg3 nnetVersion:(unsigned long long)arg4 numFrames:(unsigned long long)arg5 trainingOffset:(unsigned long long)arg6 recognitionOffset:(unsigned long long)arg7 language:(NSString *)arg8;

@end
