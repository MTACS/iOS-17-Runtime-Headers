
@protocol ReadingListMetadataProvider <NSObject>

@optional

- (void)fetchMetadataForBookmark:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: WebBookmark *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSString *, NSString *, NSData *, void*
- (void)fetchThumbnailForBookmark:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: WebBookmark *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSData *, void*

@end
