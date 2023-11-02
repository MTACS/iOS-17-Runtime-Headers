
@protocol SHSessionDriver <SHMatcherDelegate>

@required

- (void)flow:(AVAudioPCMBuffer *)arg1 time:(AVAudioTime *)arg2;
- (NSUUID *)matchingSignatureID;
- (<SHSessionDriverDelegate> *)sessionDriverDelegate;
- (void)setSessionDriverDelegate:(id <SHSessionDriverDelegate>)arg1;

@end
