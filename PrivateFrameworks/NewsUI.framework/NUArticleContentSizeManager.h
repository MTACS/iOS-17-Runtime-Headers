
@interface NUArticleContentSizeManager : NSObject <NUArticleContentSizeManager> {
    FCTagSettings * _tagSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCTagSettings *tagSettings;

- (void).cxx_destruct;
- (long long)contentScaleForArticle:(id)arg1;
- (id)contentSizeCategoryForArticle:(id)arg1;
- (id)contentSizeCategoryForSize:(long long)arg1;
- (id)initWithTagSettings:(id)arg1;
- (id)tagSettings;
- (long long)textSizeForContentSizeCategory:(id)arg1;
- (void)updateContentScale:(long long)arg1 forArticle:(id)arg2;
- (void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2;

@end
