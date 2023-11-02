
@protocol NUArticleScrollPositionManagerType

@required

- (NUArticleScrollPosition *)scrollPositionForHeadline:(id <FCHeadlineProviding>)arg1;
- (void)setPosition:(SXScrollPosition *)arg1 headline:(id <FCHeadlineProviding>)arg2;

@end
