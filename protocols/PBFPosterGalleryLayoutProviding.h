
@protocol PBFPosterGalleryLayoutProviding <NSObject>

@required

- (void)fetchGalleryLayoutWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBFPosterGalleryLayout *, NSError *, void*
- (void)handlePosterDescriptorsDidChange:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@optional

- (bool)wantsFetchGalleryLayoutAfterHandlePosterDescriptorsDidChange;

@end
