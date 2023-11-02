
@protocol AAOBWelcomeControllerModelProtocol <NSObject>

@optional

- (AACustodianshipInfo *)custodianshipInfo;
- (NSString *)detailText;
- (NSString *)helpLinkTitle;
- (NSString *)helpLinkURL;
- (NSString *)imageName;
- (NSString *)leftBarButton;
- (NSString *)ownerHandle;
- (NSString *)primaryButton;
- (NSString *)recipientHandle;
- (NSString *)secondaryButton;
- (void)setCustodianshipInfo:(AACustodianshipInfo *)arg1;
- (void)setDetailText:(NSString *)arg1;
- (void)setHelpLinkTitle:(NSString *)arg1;
- (void)setHelpLinkURL:(NSString *)arg1;
- (void)setImageName:(NSString *)arg1;
- (void)setLeftBarButton:(NSString *)arg1;
- (void)setOwnerHandle:(NSString *)arg1;
- (void)setPrimaryButton:(NSString *)arg1;
- (void)setRecipientHandle:(NSString *)arg1;
- (void)setSecondaryButton:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
