
@protocol PUPhotoPickerRemoteService <PUPhotoPickerSelectionService, PUPhotoPickerTestSupportHandler>

@required

- (void)invalidatePhotoPickerRemoteServices;
- (void)performTraitCollectionUpdateUsingData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*

@end
