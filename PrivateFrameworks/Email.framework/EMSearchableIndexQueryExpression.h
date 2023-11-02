
@interface EMSearchableIndexQueryExpression : NSObject <EFPubliclyDescribable, NSCopying> {
    NSString * _queryString;
    NSString * _searchString;
    CSSuggestion * _updatedSuggestion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, copy) NSString *searchString;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CSSuggestion *updatedSuggestion;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)expressionWithQueryString:(id)arg1;
+ (id)expressionWithQueryString:(id)arg1 searchString:(id)arg2 updatedSuggestion:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)ef_publicDescription;
- (id)init;
- (id)initWithQueryString:(id)arg1 searchString:(id)arg2 updatedSuggestion:(id)arg3;
- (bool)isValid;
- (id)queryString;
- (id)searchString;
- (void)setQueryString:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)updatedSuggestion;

@end
