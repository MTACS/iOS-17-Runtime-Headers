
@interface PXCMMFileBackedContext : PXCMMContext {
    PXCMMFileBackedActionManager * _fileBackedActionManager;
}

+ (id)fileBackedContextWithDirectoryURL:(id)arg1 activityType:(unsigned long long)arg2 title:(id)arg3;

- (void).cxx_destruct;
- (id)actionManager;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;

@end
