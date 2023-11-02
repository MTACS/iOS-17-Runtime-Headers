
@protocol SBHomeButtonShowPasscodeRecognizerDelegate <NSObject>

@required

- (void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id <SBHomeButtonShowPasscodeRecognizer>)arg1;
- (void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id <SBHomeButtonShowPasscodeRecognizer>)arg1;

@end
