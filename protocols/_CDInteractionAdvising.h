
@protocol _CDInteractionAdvising

@required

- (NSArray *)adviseInteractionsForDate:(NSDate *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseInteractionsForKeywordsInString:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseInteractionsUsingSettings:(_CDInteractionAdvisorSettings *)arg1;
- (NSArray *)adviseSocialInteractionsForDate:(NSDate *)arg1 andSeedContacts:(NSArray *)arg2 usingSettings:(_CDInteractionAdvisorSettings *)arg3;
- (NSArray *)rankCandidateContacts:(NSArray *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (void)tuneSocialAdvisorUsingSettings:(_CDInteractionAdvisorSettings *)arg1 heartBeatHandler:(id <_CDInteractionXPCHeartBeatProtocol>)arg2;

@end
