
@protocol SBHIconModelApplicationDataSource <NSObject>

@required

- (NSArray *)allApplicationPlaceholdersForIconModel:(SBHIconModel *)arg1;
- (NSArray *)allApplicationsForIconModel:(SBHIconModel *)arg1;
- (<SBHApplication> *)iconModel:(SBHIconModel *)arg1 applicationWithBundleIdentifier:(NSString *)arg2;

@optional

- (void)addIconModelApplicationDataSourceObserver:(id <SBHIconModelApplicationDataSourceObserver>)arg1;
- (void)removeIconModelApplicationDataSourceObserver:(id <SBHIconModelApplicationDataSourceObserver>)arg1;
- (void)uninstallApplicationWithBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
