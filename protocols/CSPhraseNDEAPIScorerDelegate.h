
@protocol CSPhraseNDEAPIScorerDelegate <NSObject>

@required

- (void)voiceTriggerPhraseNDEAPIScorerDidDetectedKeyword:(CSPhraseNDEAPIScorer *)arg1 bestStartSampleCount:(unsigned long long)arg2 bestEndSampleCount:(unsigned long long)arg3;

@end
