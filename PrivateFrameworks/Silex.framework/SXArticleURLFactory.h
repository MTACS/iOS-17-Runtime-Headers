
@interface SXArticleURLFactory : NSObject <SXArticleURLFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createArticleURLWithIdentifier:(id)arg1;

@end
