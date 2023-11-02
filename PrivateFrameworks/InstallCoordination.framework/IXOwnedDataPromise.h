
@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding> {
    long long  _sandboxExtensionHandle;
    NSURL * _stagedPath;
    NSString * _targetLastPathComponent;
}

@property (nonatomic, readonly) long long sandboxExtensionHandle;
@property (nonatomic, retain) IXOwnedDataPromiseSeed *seed;
@property (nonatomic, retain) NSURL *stagedPath;
@property (nonatomic, readonly) NSURL *stagingBaseDir;
@property (nonatomic, retain) NSString *targetLastPathComponent;

- (void).cxx_destruct;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;
- (oneway void)_clientDelegate_didComplete;
- (void)_internalInit;
- (bool)consumeSandboxExtensionWithError:(id*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (id)initWithSeed:(id)arg1;
- (void)releaseSandboxExtension;
- (long long)sandboxExtensionHandle;
- (Class)seedClass;
- (void)setStagedPath:(id)arg1;
- (void)setTargetLastPathComponent:(id)arg1;
- (bool)setTargetLastPathComponent:(id)arg1 error:(id*)arg2;
- (id)stagedPath;
- (id)stagingBaseDir;
- (id)targetLastPathComponent;
- (id)targetLastPathComponentWithError:(id*)arg1;

@end
