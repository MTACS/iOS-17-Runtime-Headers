
@interface WFRuntimeRunnableDataSource : NSObject {
    WFRuntimeRunnableDataSourceImpl * _impl;
}

@property (nonatomic, retain) WFRuntimeRunnableDataSourceImpl *impl;

+ (id)sharedDataSource;

- (void).cxx_destruct;
- (id)impl;
- (id)init;
- (void)loadEntriesFor:(Class)arg1 parameterKey:(id)arg2 limit:(long long)arg3 collectionIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setImpl:(id)arg1;

@end
