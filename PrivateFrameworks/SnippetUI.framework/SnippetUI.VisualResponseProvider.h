
@interface SnippetUI.VisualResponseProvider : NSObject

+ (void)preWarm:(id)arg1;
+ (void)setPatternId:(id)arg1 forViewId:(id)arg2;
+ (id)transformModel:(id)arg1 mode:(long long)arg2 currentIdiom:(long long)arg3;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)viewControllerFor:(id)arg1 mode:(long long)arg2 completion:(id /* block */)arg3;
- (id)viewControllerForModel:(id)arg1 mode:(long long)arg2;
- (id)viewControllerForSnippetModel:(id)arg1 bundleName:(id)arg2 mode:(long long)arg3;
- (id)viewForModel:(id)arg1 mode:(long long)arg2 overload:(long long)arg3;
- (id)viewForSnippetModel:(id)arg1 bundleName:(id)arg2 mode:(long long)arg3;

@end
