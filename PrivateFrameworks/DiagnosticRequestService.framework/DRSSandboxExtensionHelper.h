
@interface DRSSandboxExtensionHelper : NSObject {
    bool  _didInit;
    NSString * _logPath;
    long long  _sandboxExtensionHandle;
}

@property (nonatomic, readonly) bool didInit;
@property (nonatomic, readonly) NSString *logPath;
@property (nonatomic) long long sandboxExtensionHandle;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)didInit;
- (id)initWithSandboxExtensionToken:(id)arg1 logPath:(id)arg2 errorOut:(id*)arg3;
- (id)logPath;
- (long long)sandboxExtensionHandle;
- (void)setSandboxExtensionHandle:(long long)arg1;

@end
