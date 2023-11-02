
@interface PKAccountSupportTopic : NSObject {
    NSString * _bodyText;
    NSString * _businessChatPage;
    NSString * _businessChatTargetDialog;
    PKAccountSupportTopicExplanation * _explanation;
    unsigned long long  _issueType;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *bodyText;
@property (nonatomic, readonly, copy) NSString *businessChatPage;
@property (nonatomic, readonly, copy) NSString *businessChatTargetDialog;
@property (nonatomic, readonly) PKAccountSupportTopicExplanation *explanation;
@property (nonatomic, readonly) unsigned long long issueType;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)bodyText;
- (id)businessChatPage;
- (id)businessChatTargetDialog;
- (id)explanation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNonCancellableBillPayment;
- (id)initWithOtherTopicForAccount:(id)arg1;
- (id)initWithUnavailableFundingSourceTopicForAccount:(id)arg1;
- (unsigned long long)issueType;
- (bool)supportsBusinessChat;
- (id)title;

@end
