
@interface SUUINavigationBarContext : NSObject {
    SUUIClientContext * _clientContext;
    double  _maximumNavigationBarWidth;
    NSOperationQueue * _operationQueue;
    UIViewController * _parentViewController;
    SUUIResourceLoader * _resourceLoader;
    SUUILayoutCache * _textLayoutCache;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic) double maximumNavigationBarWidth;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) SUUIResourceLoader *resourceLoader;
@property (nonatomic, retain) SUUILayoutCache *textLayoutCache;

- (void).cxx_destruct;
- (id)clientContext;
- (double)maximumNavigationBarWidth;
- (id)operationQueue;
- (id)parentViewController;
- (id)resourceLoader;
- (void)setClientContext:(id)arg1;
- (void)setMaximumNavigationBarWidth:(double)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (id)textLayoutCache;

@end
