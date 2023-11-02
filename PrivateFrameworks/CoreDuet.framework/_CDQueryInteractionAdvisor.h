
@interface _CDQueryInteractionAdvisor : NSObject {
    _CDInteractionStore * _store;
}

@property (retain) _CDInteractionStore *store;

- (void).cxx_destruct;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (id)initWithStore:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
