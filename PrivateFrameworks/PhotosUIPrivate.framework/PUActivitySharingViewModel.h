
@interface PUActivitySharingViewModel : PXObservable {
    bool  _actionSheet;
    PHFetchResult * _collectionListFetchResult;
    <PXDisplayAsset> * _keyAsset;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    PHPerson * _person;
    PXPhotosDataSource * _photosDataSource;
    PUPhotoSelectionManager * _selectionManager;
    long long  _sourceOrigin;
}

@property (getter=isActionSheet, nonatomic, readonly) bool actionSheet;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (nonatomic, retain) PUPhotoSelectionManager *selectionManager;
@property (nonatomic, readonly) long long sourceOrigin;

- (void).cxx_destruct;
- (id)collectionListFetchResult;
- (id)init;
- (id)initWithActivitySharingConfiguration:(id)arg1;
- (bool)isActionSheet;
- (id)keyAsset;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (id)person;
- (id)photosDataSource;
- (id)selectionManager;
- (void)setActionSheet:(bool)arg1;
- (void)setSelectionManager:(id)arg1;
- (long long)sourceOrigin;

@end
