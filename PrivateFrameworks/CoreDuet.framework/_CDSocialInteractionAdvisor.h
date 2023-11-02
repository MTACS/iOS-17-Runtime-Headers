
@interface _CDSocialInteractionAdvisor : NSObject {
    _CDInteractionStore * _store;
}

@property (retain) _CDInteractionStore *store;

- (void).cxx_destruct;
- (id)adviseInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)inSeedPredicateForSeed:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)keyForModelWithSettings:(id)arg1;
- (id)rankContacts:(id)arg1 withSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)recentPredicateForDate:(id)arg1 lambda:(float)arg2 lookAheadWeeks:(int)arg3;
- (void)setStore:(id)arg1;
- (id)store;
- (void)tuneUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;

@end
