
@interface PhotosUIPrivate.AmbientPhotoFrameCuratedPeopleRequester : NSObject <PXPassiveContentPeoplePickerDataSourceChangeObserver> {
    void $__lazy_storage_$_peoplePickerDataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  assetsContinuation;
    void photoLibrary;
}

- (void).cxx_destruct;
- (id)init;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)arg1;

@end
