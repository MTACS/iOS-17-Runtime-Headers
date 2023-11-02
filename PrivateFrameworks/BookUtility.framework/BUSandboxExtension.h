
@interface BUSandboxExtension : NSObject {
    long long  _extensionHandle;
}

- (void)close;
- (void)dealloc;
- (id)initWithExtensionToken:(const char *)arg1;

@end
