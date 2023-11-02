
@protocol SUUILibraryInterface <NSObject>

@required

- (void)enumerateStatesForLibraryItems:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUUILibraryItem *, SUUILibraryItemState *, bool*, void*
- (SUUILibraryItemState *)stateForLibraryItem:(SUUILibraryItem *)arg1;

@optional

- (NSSet *)exposedPlatformItemKinds;
- (bool)performActionForLibraryItem:(SUUILibraryItem *)arg1;
- (void)removeMediaItemsForLibraryItems:(NSArray *)arg1;
- (SUUILibraryItemState *)stateForLibraryItemAfterLibraryIntegration:(SUUILibraryItem *)arg1;

@end
