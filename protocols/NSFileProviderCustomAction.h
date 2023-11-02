
@protocol NSFileProviderCustomAction <NSObject>

@required

- (NSProgress *)performActionWithIdentifier:(void *)arg1 onItemsWithIdentifiers:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
