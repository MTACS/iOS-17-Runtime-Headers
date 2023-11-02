
@protocol PopUpLegalDelegate <NSObject>

@required

- (NSString *)continueButtonLabel;
- (void)didAcceptLegalNotice;
- (bool)shouldShowLegalNotice;
- (NSString *)textForLegalNotice;

@end
