
@interface _MDQueryRewrite : NSObject {
    NSString * _queryString;
    float  _score;
    id  _searchQueryContext;
}

@property (nonatomic, copy) NSString *queryString;
@property (nonatomic) float score;
@property (nonatomic, retain) id searchQueryContext;

- (void)dealloc;
- (id)initWithSearchQueryString:(id)arg1 searchQueryContext:(id)arg2 score:(float)arg3;
- (id)queryString;
- (float)score;
- (id)searchQueryContext;
- (void)setQueryString:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setSearchQueryContext:(id)arg1;

@end
