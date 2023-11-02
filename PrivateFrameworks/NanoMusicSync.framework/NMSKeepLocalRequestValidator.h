
@interface NMSKeepLocalRequestValidator : NSObject {
    unsigned long long  _itemSize;
    NSOperationQueue * _validationQueue;
}

- (void).cxx_destruct;
- (void)_continueWithOptions:(id)arg1 validatorException:(unsigned long long)arg2 cellularNetwork:(bool)arg3 completion:(id /* block */)arg4;
- (unsigned long long)_fetchSizeOfPendingDownloadsWithPowerConstraintCheck:(bool)arg1;
- (void)_finishWithOptions:(id)arg1 validatorException:(unsigned long long)arg2 constraints:(unsigned long long)arg3 error:(id)arg4 completion:(id /* block */)arg5;
- (id)_predicateForKeepLocalStatusDownloadingOrWaiting;
- (unsigned long long)_resolvedValidatorException:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithItemSize:(unsigned long long)arg1;
- (id)initWithModelObject:(id)arg1;
- (void)performWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
