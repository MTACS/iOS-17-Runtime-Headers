
@interface CompletionGroup : SFResultSection {
    NSArray * _completions;
    NSString * _headerViewReuseIdentifier;
    WBSCompletionQuery * _query;
}

@property (nonatomic, readonly, copy) NSArray *completions;
@property (nonatomic, readonly) NSString *defaultHeaderTitle;
@property (nonatomic, readonly, copy) NSString *headerViewReuseIdentifier;
@property (nonatomic, retain) WBSCompletionQuery *query;

- (void).cxx_destruct;
- (id)completions;
- (void)configureHeaderView:(id)arg1 forCompletionList:(id)arg2;
- (id)defaultHeaderTitle;
- (id)headerView;
- (id)headerViewReuseIdentifier;
- (id)initWithTitle:(id)arg1 completions:(id)arg2 maximumNumberOfCompletions:(unsigned long long)arg3;
- (id)initWithTitle:(id)arg1 completions:(id)arg2 query:(id)arg3 maximumNumberOfCompletions:(unsigned long long)arg4;
- (id)query;
- (void)setCompletions:(id)arg1;
- (void)setQuery:(id)arg1;

@end
