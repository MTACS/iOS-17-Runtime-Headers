
@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse {
    NSString * _conversationIdentifier;
}

@property (nonatomic, copy) NSString *conversationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (void)setConversationIdentifier:(id)arg1;

@end
