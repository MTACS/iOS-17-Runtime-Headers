
@interface _MXExtensionDispatchCenter : NSObject {
    _MXExtensionProvider * _extensionProvider;
    NSHashTable * _handlers;
    NSObject<OS_dispatch_queue> * _lock;
}

@property (nonatomic, readonly) _MXExtensionProvider *extensionProvider;

- (void).cxx_destruct;
- (id)addExtensionsUpdateHandler:(id /* block */)arg1;
- (void)dispatchExtensions:(id)arg1 error:(id)arg2;
- (id)extensionProvider;
- (id)initWithExtensionProvider:(id)arg1;
- (void)removeExtensionUpdateHandler:(id)arg1;

@end
