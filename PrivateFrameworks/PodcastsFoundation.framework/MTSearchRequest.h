
@interface MTSearchRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void contentTypes;
    void limit;
    void term;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTerm:(id)arg1 contentTypes:(id)arg2;
- (void)performWithCompletion:(id /* block */)arg1;
- (void)setLimit:(long long)arg1;

@end
