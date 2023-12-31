
@interface FCArticleSearchResult : NSObject {
    NSString * _articleID;
    <FCHeadlineProviding> * _deflatedHeadline;
    <FCHeadlineProviding> * _inflatedHeadline;
    SFSearchResult * _searchResult;
}

@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) <FCHeadlineProviding> *deflatedHeadline;
@property (nonatomic, retain) <FCHeadlineProviding> *inflatedHeadline;
@property (nonatomic, retain) SFSearchResult *searchResult;

- (void).cxx_destruct;
- (id)articleID;
- (id)deflatedHeadline;
- (id)inflatedHeadline;
- (id)initWithParsecSearchResult:(id)arg1 cloudContext:(id)arg2;
- (id)searchResult;
- (void)setInflatedHeadline:(id)arg1;
- (void)setSearchResult:(id)arg1;

@end
