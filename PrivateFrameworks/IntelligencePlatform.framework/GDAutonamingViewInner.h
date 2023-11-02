
@interface GDAutonamingViewInner : NSObject {
    void context;
    void feedbackService;
    void isForLiveServing;
    void rejectedIdentifiers;
    void subgraph;
}

- (void).cxx_destruct;
- (void)_reset;
- (void)confirmWithIdentifier:(id)arg1 person:(id)arg2 confirmationType:(long long)arg3;
- (void)didUpdateUserFeedback;
- (id)init;
- (id)initWithViewName:(id)arg1 error:(id*)arg2;
- (id)objCPersonFor:(id)arg1;
- (void)rejectWithIdentifier:(id)arg1 person:(id)arg2 confirmationType:(long long)arg3;

@end
