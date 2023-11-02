
@protocol FPDMoveWriterExecutor

@required

- (id)initWithWriter:(FPDMoveWriter *)arg1;
- (void)performCopyOfItem:(void *)arg1 to:(void *)arg2 as:(void *)arg3 sourceMaterializeOption:(void *)arg4 targetMaterializeOption:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: FPActionOperationLocator *, FPActionOperationLocator *, NSString *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPActionOperationLocator *, NSError *, void*
- (void)performCreateFolder:(void *)arg1 inside:(void *)arg2 as:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: FPActionOperationLocator *, FPActionOperationLocator *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPActionOperationLocator *, NSError *, void*
- (void)performMoveOfFolder:(void *)arg1 to:(void *)arg2 as:(void *)arg3 sourceMaterializeOption:(void *)arg4 targetMaterializeOption:(void *)arg5 atomically:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: FPActionOperationLocator *, FPActionOperationLocator *, NSString *, unsigned long long, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPActionOperationLocator *, NSError *, void*
- (void)performMoveOfItem:(void *)arg1 to:(void *)arg2 as:(void *)arg3 sourceMaterializeOption:(void *)arg4 targetMaterializeOption:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: FPActionOperationLocator *, FPActionOperationLocator *, NSString *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPActionOperationLocator *, NSError *, void*

@end
