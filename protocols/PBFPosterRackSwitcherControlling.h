
@protocol PBFPosterRackSwitcherControlling <NSObject>

@required

- (PBFPosterExtensionDataStore *)posterExtensionDataStore;
- (void)presentPosterGallery:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UICollectionViewController *, void*
- (void)reset:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scrollToFirstPoster:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
