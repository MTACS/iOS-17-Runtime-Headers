
@protocol VUIHomeShareMediaLibraryManagerDelegate <NSObject>

@required

- (void)homeShareManager:(NSObject<VUIHomeShareMediaLibraryManager> *)arg1 mediaLibrariesDidUpdate:(NSArray *)arg2 withChangeSet:(VUICollectionChangeSet *)arg3;

@end
