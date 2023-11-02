
@interface PLSyncCancellingProgress : NSProgress {
    id /* block */  _pl_cancellationHandler;
}

@property (copy) id /* block */ pl_cancellationHandler;

+ (id)discreteProgressWithTotalUnitCount:(long long)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)pl_cancellationHandler;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setPl_cancellationHandler:(id /* block */)arg1;

@end
