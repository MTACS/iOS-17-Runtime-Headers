
@interface NUIdleWebViewControllerFactory : NSObject <NUWebViewControllerFactoryType>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createViewControllerForURL:(id)arg1;

@end
