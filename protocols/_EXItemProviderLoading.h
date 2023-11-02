
@protocol _EXItemProviderLoading <NSObject, NSSecureCoding>

@required

- (void)loadItemForTypeIdentifier:(void *)arg1 completionHandler:(void *)arg2 expectedValueClass:(void *)arg3 options:(void *)arg4; // needs 4 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSSecureCoding> *, NSError *, void*, Class, NSDictionary *
- (void)loadPreviewImageWithCompletionHandler:(void *)arg1 expectedValueClass:(void *)arg2 options:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NSSecureCoding> *, NSError *, void*, Class, NSDictionary *

@end
