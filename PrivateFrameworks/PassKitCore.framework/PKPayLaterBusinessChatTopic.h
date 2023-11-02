
@interface PKPayLaterBusinessChatTopic : NSObject {
    NSString * _analyticsIdentifier;
    NSString * _displayText;
    NSString * _messageBubbleText;
    NSString * _page;
    NSSet * _relevantFinancingPlanStates;
    bool  _requiresFinancingPlan;
    NSString * _serverDefinedContentRequestType;
    NSString * _targetDialog;
    unsigned long long  _topicType;
}

@property (nonatomic, readonly, copy) NSString *analyticsIdentifier;
@property (nonatomic, readonly, copy) NSString *displayText;
@property (nonatomic, copy) NSString *messageBubbleText;
@property (nonatomic, readonly, copy) NSString *page;
@property (nonatomic, readonly, copy) NSString *payLaterContentRequestTypeString;
@property (nonatomic, readonly, copy) NSSet *relevantFinancingPlanStates;
@property (nonatomic, readonly) bool requiresFinancingPlan;
@property (nonatomic, readonly, copy) NSString *targetDialog;
@property (nonatomic, readonly) unsigned long long topicType;

+ (id)genericBusinessChatTopicForContext:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)analyticsIdentifier;
- (id)displayText;
- (id)initWithContext:(unsigned long long)arg1 topicType:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)messageBubbleText;
- (id)messagesBubbleTextWithFinancingPlan:(id)arg1 installment:(id)arg2 payment:(id)arg3 dispute:(id)arg4;
- (id)page;
- (id)payLaterContentRequestTypeString;
- (id)relevantFinancingPlanStates;
- (bool)requiresFinancingPlan;
- (void)setMessageBubbleText:(id)arg1;
- (id)targetDialog;
- (unsigned long long)topicType;
- (void)updateWithBusinessChatTopic:(id)arg1;

@end
