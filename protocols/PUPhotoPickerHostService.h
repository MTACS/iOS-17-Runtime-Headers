
@protocol PUPhotoPickerHostService <PUPhotoPickerSelectionService, PUPhotoPickerTestSupportHandler>

@required

- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(NSNumber *)arg1;
- (void)didSelectMediaWithInfoDictionary:(NSDictionary *)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(NSArray *)arg1;
- (void)didSetOnboardingHeaderDismissed:(bool)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(NSNumber *)arg1;
- (void)invalidatePhotoPickerHostServices;
- (void)performTraitCollectionUpdateUsingData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*

@end
