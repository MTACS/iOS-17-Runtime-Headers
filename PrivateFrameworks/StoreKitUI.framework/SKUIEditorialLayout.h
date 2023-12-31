
@interface SKUIEditorialLayout : NSObject {
    SKUIEditorialComponent * _editorial;
    long long  _landscapeLinkLayoutIndex;
    long long  _landscapeTextLayoutIndex;
    long long  _landscapeTitleLayoutIndex;
    double  _landscapeWidth;
    long long  _portraitLinkLayoutIndex;
    long long  _portraitTextLayoutIndex;
    long long  _portraitTitleLayoutIndex;
    double  _portraitWidth;
    SKUILayoutCache * _textLayoutCache;
}

@property (nonatomic, readonly) SKUIEditorialComponent *editorialComponent;
@property (nonatomic, readonly) SKUILayoutCache *layoutCache;

- (void).cxx_destruct;
- (id)_bodyTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)_linkLayoutRequestWithTotalWidth:(double)arg1;
- (id)_titleTextLayoutRequestWithTotalWidth:(double)arg1;
- (id)bodyTextLayoutForOrientation:(long long)arg1;
- (id)editorialComponent;
- (void)enqueueLayoutRequests;
- (id)initWithEditorial:(id)arg1 layoutCache:(id)arg2;
- (id)layoutCache;
- (double)layoutHeightForOrientation:(long long)arg1 expanded:(bool)arg2;
- (id)linkLayoutForOrientation:(long long)arg1;
- (void)setLayoutWidth:(double)arg1 forOrientation:(long long)arg2;
- (id)titleTextLayoutForOrientation:(long long)arg1;

@end
