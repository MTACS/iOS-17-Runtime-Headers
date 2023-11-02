
@interface STSCategoryResult : NSObject {
    bool  _clearButtonHidden;
    SFSearchResult * _searchResult;
    SFSearchSuggestion * _suggestion;
    NSString * _title;
    long long  _type;
}

@property (nonatomic) bool clearButtonHidden;
@property (nonatomic, retain) SFSearchResult *searchResult;
@property (nonatomic, retain) SFSearchSuggestion *suggestion;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (bool)clearButtonHidden;
- (id)searchResult;
- (void)setClearButtonHidden:(bool)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)suggestion;
- (id)title;
- (long long)type;

@end
