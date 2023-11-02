
@interface SXQuickLookPreviewViewControllerFactory : NSObject <SXQuickLookPreviewViewControllerFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2;

@end
