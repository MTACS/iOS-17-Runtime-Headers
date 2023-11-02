
@protocol PKAccountSupportTopicExplanationViewControllerDelegate <NSObject>

@required

- (void)openBusinessChatForTopic:(PKAccountSupportTopic *)arg1;
- (bool)shouldShowSupportLink:(PKAccountSupportTopicExplanationLink *)arg1;

@optional

- (void)showMerchantDetailsForTransaction;

@end
