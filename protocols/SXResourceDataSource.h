
@protocol SXResourceDataSource <NSObject>

@required

- (void)fileURLForURL:(void *)arg1 onCompletion:(void *)arg2 onError:(void *)arg3; // needs 3 arg types, found 13: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (id /* block */)loadImagesForImageRequest:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 11: id /* block */, void*, id, SEL, SXImageRequest *, id /* block */, void*, void, id /* block */, NSArray *, void*
- (NSURL *)translateURL:(NSURL *)arg1;

@end
