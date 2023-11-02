
@interface _EARSpeakerCodeWriter : NSObject <_EARSpeakerCodeWriterInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setTrainingSpeakerCode:(id)arg1 inferenceSpeakerCode:(id)arg2 accumulatedGradient:(id)arg3 nnetVersion:(unsigned long long)arg4 numFrames:(unsigned long long)arg5 trainingOffset:(unsigned long long)arg6 recognitionOffset:(unsigned long long)arg7 language:(id)arg8;

@end
