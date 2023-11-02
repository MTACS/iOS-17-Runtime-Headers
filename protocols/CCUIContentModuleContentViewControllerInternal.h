
@protocol CCUIContentModuleContentViewControllerInternal <CCUIContentModuleContentViewController>

@optional

- (void)requestAuthenticationForTransitionToExpandedContentModuleWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)shouldRequestAuthenticationForTransitionToExpandedContent;
- (void)willBecomeActive;
- (void)willResignActive;

@end
