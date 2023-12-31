
@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling> {
    NSExtensionContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensionContext;
- (id)initWithExtensionContext:(id)arg1;
- (void)openURL:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
