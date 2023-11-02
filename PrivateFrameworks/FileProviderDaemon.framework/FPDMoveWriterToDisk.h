
@interface FPDMoveWriterToDisk : NSObject <FPDMoveWriterExecutor> {
    NSFileManager * _fileManager;
    <FPActionLocatorAccess> * _stopAccessingToken;
    FPDMoveWriter * _writer;
}

- (void).cxx_destruct;
- (void)_performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(id /* block */)arg7;
- (void)_performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(id /* block */)arg7;
- (void)_resolveLocator:(id)arg1 completion:(id /* block */)arg2;
- (void)_respectLastUsageDatePolicyForDestinationURL:(id)arg1 withSource:(id)arg2;
- (void)dealloc;
- (id)initWithWriter:(id)arg1;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(id /* block */)arg4;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(bool)arg6 completion:(id /* block */)arg7;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(id /* block */)arg6;

@end
