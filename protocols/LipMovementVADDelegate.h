
@protocol LipMovementVADDelegate <NSObject>

@required

- (void)didUpdateVisualSpeechProbability:(double)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;

@end
