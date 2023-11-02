
@interface WFOnScreenContentManager : NSObject

- (id)currentDisplayLayout;
- (void)getContentForLayoutElement:(id)arg1 serviceOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getNodeForGlobalUserActivityWithCompletionHandler:(id /* block */)arg1;
- (void)getOnScreenContentWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)getOnScreenContentWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)visibleApplicationsFromLayout:(id)arg1;

@end
