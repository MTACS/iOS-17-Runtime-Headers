
@interface FPDMoveWriterToProvider : NSObject <FPDMoveWriterExecutor> {
    <FPActionLocatorAccess> * _stopAccessingToken;
    FPDMoveWriter * _writer;
}

- (void).cxx_destruct;
- (void)_createFolder:(id)arg1 under:(id)arg2 completion:(id /* block */)arg3;
- (void)_createTargetItemWithProxy:(id)arg1 target:(id)arg2 contents:(id)arg3 targetName:(id)arg4 lastUsedDate:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_importURL:(id)arg1 source:(id)arg2 target:(id)arg3 as:(id)arg4 lastUsedDate:(id)arg5 initialImportFinished:(id /* block */)arg6 progressAvailable:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)_postImportStepForItem:(id)arg1 sourceURL:(id)arg2 targetURL:(id)arg3 tempFolder:(id)arg4 wasCopyRequested:(bool)arg5 error:(id)arg6 completion:(id /* block */)arg7;
- (id)_remoteProxy;
- (id)_targetSession;
- (void)dealloc;
- (id)initWithWriter:(id)arg1;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(id /* block */)arg4;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(bool)arg6 completion:(id /* block */)arg7;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(id /* block */)arg6;

@end
