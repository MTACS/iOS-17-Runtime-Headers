
@interface HDStaticSyncImportTask : HDStaticSyncTask {
    NSURL * _importDirectoryURL;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 URL:(id)arg4;
- (id)runWithCompletion:(id /* block */)arg1;

@end
