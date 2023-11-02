
@protocol CACCorrectionsPresentationDelegate <NSObject>

@required

- (void)correctionsPresentationViewController:(CACCorrectionsPresentationViewController *)arg1 didSelectItemWithText:(NSString *)arg2;
- (void)dismissCorrectionsPresentationViewController:(CACCorrectionsPresentationViewController *)arg1;

@end
