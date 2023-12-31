
@protocol _UIDocumentPickerDirectoryObserver <NSObject>

@required

- (bool)afterInitialUpdate;
- (NSPredicate *)queryPredicate;
- (void)setQueryPredicate:(NSPredicate *)arg1;
- (void)setStaticItems:(NSOrderedSet *)arg1;
- (NSOrderedSet *)staticItems;

@end
