
@protocol NUPaging <NSObject>

@required

- (NSArray *)allPages;
- (<NUPage> *)firstPage;
- (void)forEachPage:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUPage> *, void*
- (<NUPage> *)lastPage;
- (<NUPage> *)pageAfterIdentifier:(NSString *)arg1;
- (<NUPage> *)pageBeforeForIdentifier:(NSString *)arg1;
- (<NUPage> *)pageForIdentifier:(NSString *)arg1;

@end
