
@interface FindOnPageCompletionProvider : CompletionProvider {
    <FindOnPageCompletionProviderDataSource> * _dataSource;
    long long  _parsecQueryID;
}

@property (nonatomic) <FindOnPageCompletionProviderDataSource> *dataSource;
@property (nonatomic, readonly) long long parsecQueryID;

- (void).cxx_destruct;
- (id)completionsForQuery:(id)arg1;
- (id)dataSource;
- (long long)parsecQueryID;
- (void)setDataSource:(id)arg1;
- (void)setQueryToComplete:(id)arg1;

@end
