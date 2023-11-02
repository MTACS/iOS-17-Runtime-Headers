
@interface BRWaitForFPFSMigrationOperation : BROperation {
    id /* block */  _fpfsMigrationCompletion;
}

@property (copy) id /* block */ fpfsMigrationCompletion;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id /* block */)fpfsMigrationCompletion;
- (id)init;
- (void)main;
- (void)setFpfsMigrationCompletion:(id /* block */)arg1;

@end
