
@interface VITextLookupQuery : NSObject <NSCopying> {
    VIAnnotation * _annotation;
    NSString * _hintDomain;
    <VIImageContent> * _imageContext;
    VIQueryContext * _queryContext;
    NSString * _queryTerm;
    VITextContext * _textContext;
}

@property (nonatomic, readonly) VIAnnotation *annotation;
@property (nonatomic, readonly, copy) NSString *hintDomain;
@property (nonatomic, readonly) <VIImageContent> *imageContext;
@property (nonatomic, readonly) VIQueryContext *queryContext;
@property (nonatomic, readonly, copy) NSString *queryTerm;
@property (nonatomic, readonly, copy) VITextContext *textContext;

- (void).cxx_destruct;
- (id)annotation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hintDomain;
- (id)imageContext;
- (id)initWithQueryTerm:(id)arg1 domain:(id)arg2 textContext:(id)arg3 imageContext:(id)arg4 annotation:(id)arg5 queryContext:(id)arg6;
- (id)initWithQueryTerm:(id)arg1 hintDomain:(id)arg2 textContext:(id)arg3 imageContext:(id)arg4 annotation:(id)arg5 queryContext:(id)arg6;
- (id)queryContext;
- (id)queryTerm;
- (id)textContext;

@end
