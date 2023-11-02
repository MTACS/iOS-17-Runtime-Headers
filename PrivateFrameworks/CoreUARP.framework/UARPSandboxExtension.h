
@interface UARPSandboxExtension : NSObject {
    long long  _sandboxExtensionHandle;
}

+ (id)readWriteTokenStringWithURL:(id)arg1;

- (void)dealloc;
- (id)initWithTokenString:(id)arg1;

@end
