
@protocol MacinTalkPhraseProcessorDelegate

@optional

- (void)didFinishGeneratingSamples;
- (void)didGenerateSamplesForPhoneme:(long long)arg1 phonemeOpcode:(short)arg2;
- (void)didGenerateSamplesForSync:(long long)arg1 message:(unsigned int)arg2;
- (void)didGenerateSamplesForWord:(long long)arg1 stringPosition:(unsigned long long)arg2 length:(unsigned short)arg3;

@end
