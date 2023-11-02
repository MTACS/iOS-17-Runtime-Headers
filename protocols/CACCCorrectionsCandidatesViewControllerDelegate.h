
@protocol CACCCorrectionsCandidatesViewControllerDelegate <NSObject>

@required

- (void)correctionsCandidatesViewController:(CACCorrectionsCandidatesViewController *)arg1 didSelectItemWithText:(NSString *)arg2;
- (void)dismissCorrectionsCandidatesViewController:(CACCorrectionsCandidatesViewController *)arg1;

@end
