
@protocol CKObscurableBalloonViewDelegate <NSObject>

@required

- (void)didTapBlockContact;
- (void)didTapWaysToGetHelp;
- (bool)isRevealingContentEnabled;

@optional

- (void)presentGetHelpAlert;

@end
