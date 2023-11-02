
@protocol SBWalletPrearmRecognizerDelegate <NSObject>

@required

- (void)walletPrearmRecognizer:(SBWalletPrearmRecognizer *)arg1 didFailToRecognizeForReason:(unsigned long long)arg2;
- (void)walletPrearmRecognizerDidRecognize:(SBWalletPrearmRecognizer *)arg1;

@end
