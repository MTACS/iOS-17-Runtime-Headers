
@interface CXCallDirectoryNSExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    <CXCallDirectoryNSExtensionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    id  _extensionMatchingContext;
    NSDictionary * _extensions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallDirectoryNSExtensionManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, copy) NSDictionary *extensions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)baseExtensionMatchingAttributes;

- (void).cxx_destruct;
- (void)_beginMatchingExtensionsIfNecessary;
- (void)_extensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(id /* block */)arg3;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)extensionMatchingContext;
- (void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(id /* block */)arg3;
- (id)extensions;
- (void)extensionsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)pluginsDidInstall:(id)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setQueue:(id)arg1;

@end
