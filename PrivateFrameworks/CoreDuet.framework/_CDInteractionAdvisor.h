
@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising> {
    NSXPCConnection * _connection;
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

+ (id)interactionAdvisor;

- (void).cxx_destruct;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsUsingSettings:(id)arg1;
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (void)dealloc;
- (id)error;
- (id)initWithServiceName:(id)arg1;
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;
- (void)setError:(id)arg1;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;

@end
