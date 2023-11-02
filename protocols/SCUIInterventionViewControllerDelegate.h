
@protocol SCUIInterventionViewControllerDelegate <NSObject>

@required

- (void)didConfirmForInterventionViewController:(id <SCUIInterventionContainer>)arg1;
- (void)didRejectForInterventionViewController:(id <SCUIInterventionContainer>)arg1;

@optional

- (void)didContactSomeoneForInterventionViewController:(id <SCUIInterventionContainer>)arg1;
- (void)didRequestMoreHelpForInterventionViewController:(id <SCUIInterventionContainer>)arg1;

@end
