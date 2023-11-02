
@interface ICQOpportunitySheetDetailsSpecification : ICQOpportunityFlowSpecification {
    NSDictionary * _messagesInfo;
}

@property (nonatomic, retain) NSDictionary *messagesInfo;

- (void).cxx_destruct;
- (void)makeMessageFromServerDict:(id)arg1;
- (id)messageForKey:(id)arg1;
- (id)messagesInfo;
- (void)setMessagesInfo:(id)arg1;

@end
