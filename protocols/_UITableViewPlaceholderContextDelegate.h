
@protocol _UITableViewPlaceholderContextDelegate <NSObject>

@required

- (bool)commitPlaceholderInsertionWithContext:(void *)arg1 dataSourceUpdates:(void *)arg2; // needs 2 arg types, found 7: _UITableViewDropPlaceholderContextImpl *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSIndexPath *, void*
- (bool)deletePlaceholder:(_UITableViewDropPlaceholderContextImpl *)arg1;

@end
