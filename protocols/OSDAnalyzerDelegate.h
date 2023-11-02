
@protocol OSDAnalyzerDelegate <NSObject>

@optional

- (void)osdAnalyzer:(OSDAnalyzer *)arg1 didDetectEndOfSpeechAt:(double)arg2;
- (void)osdAnalyzer:(OSDAnalyzer *)arg1 didDetectStartOfSpeechAt:(double)arg2;
- (void)osdAnalyzer:(OSDAnalyzer *)arg1 didUpdateOSDFeatures:(OSDFeatures *)arg2;
- (void)osdAnalyzer:(OSDAnalyzer *)arg1 didUpdateVisualSpeechProbability:(double)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;

@end
