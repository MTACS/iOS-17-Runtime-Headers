
@interface IKJSApplication : IKJSObject <IKJSApplication, NSObject, _IKJSApplication, _IKJSApplicationProxy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *traitCollection;

- (id)asPrivateIKJSApplication;
- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;
- (void)exitAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)reload:(id)arg1 :(id)arg2;
- (bool)requestDocumentWithContext:(id)arg1 response:(id)arg2;
- (void)resumeAppWithOptions:(id)arg1;
- (void)suspendAppWithOptions:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionChanged:(id)arg1;
- (void)update;
- (void)updatedAppWithOptions:(id)arg1;

@end