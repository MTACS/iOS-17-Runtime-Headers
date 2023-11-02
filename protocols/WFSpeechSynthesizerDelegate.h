
@protocol WFSpeechSynthesizerDelegate <NSObject>

@optional

- (void)speechSynthesizer:(WFSpeechSynthesizer *)arg1 didFailSpeakingUtterance:(NSString *)arg2 error:(NSError *)arg3;
- (void)speechSynthesizer:(WFSpeechSynthesizer *)arg1 didFinishSpeakingUtterance:(NSString *)arg2;
- (void)speechSynthesizer:(WFSpeechSynthesizer *)arg1 didFinishSpeakingUtterance:(NSString *)arg2 intoFile:(WFFileRepresentation *)arg3;
- (void)speechSynthesizer:(WFSpeechSynthesizer *)arg1 willSpeakRangeOfUtterance:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 utterance:(NSString *)arg3;

@end
