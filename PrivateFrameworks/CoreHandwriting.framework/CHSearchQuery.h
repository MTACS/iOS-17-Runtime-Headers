
@interface CHSearchQuery : CHQuery {
    bool  _caseMatchingOnly;
    NSArray * _foundItems;
    bool  _fullWordsOnly;
    NSString * _queryString;
}

@property (nonatomic) bool caseMatchingOnly;
@property (nonatomic, readonly, copy) NSArray *foundItems;
@property (nonatomic) bool fullWordsOnly;
@property (nonatomic, copy) NSString *queryString;

- (void).cxx_destruct;
- (bool)caseMatchingOnly;
- (id)debugName;
- (id)foundItems;
- (bool)fullWordsOnly;
- (id)initWithRecognitionSession:(id)arg1;
- (id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2;
- (void)q_updateQueryResult;
- (id)queryString;
- (void)setCaseMatchingOnly:(bool)arg1;
- (void)setFullWordsOnly:(bool)arg1;
- (void)setQueryString:(id)arg1;
- (void)stop;

@end
