
@interface PXPhotoKitVirtualCollections : NSObject {
    PHAssetCollection * _allAlbumsCollection;
    PHAssetCollection * _completeMyMomentCollection;
    PHAssetCollection * _contentSyndicationCollection;
    PHAssetCollection * _forYouCollection;
    PHAssetCollection * _importHistoryCollection;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PHCollectionList * _mediaTypesCollectionList;
    PHAssetCollection * _memoriesCollection;
    PHAssetCollection * _momentsCollection;
    PHAssetCollection * _myAlbumsCollection;
    PHPhotoLibrary * _photoLibrary;
    PHAssetCollection * _photosCollection;
    PHCollectionList * _rootAlbumCollectionList;
    PHCollectionList * _rootProjectCollectionList;
    PHAssetCollection * _searchCollection;
    PHAssetCollection * _sharedActivityCollection;
    PHCollectionList * _sharedAlbumsAndActivityCollectionList;
    PHAssetCollection * _sharedAlbumsCollection;
    PHCollectionList * _sharedAlbumsCollectionList;
}

@property (nonatomic, readonly) PHAssetCollection *allAlbumsCollection;
@property (nonatomic, readonly) PHAssetCollection *completeMyMomentCollection;
@property (nonatomic, readonly) PHAssetCollection *contentSyndicationCollection;
@property (nonatomic, readonly) PHAssetCollection *forYouCollection;
@property (nonatomic, readonly) PHAssetCollection *importHistoryCollection;
@property (nonatomic, readonly) PHCollectionList *mediaTypesCollectionList;
@property (nonatomic, readonly) PHAssetCollection *memoriesCollection;
@property (nonatomic, readonly) PHAssetCollection *momentsCollection;
@property (nonatomic, readonly) PHAssetCollection *myAlbumsCollection;
@property (nonatomic, readonly) PHAssetCollection *peopleCollection;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PHAssetCollection *photosCollection;
@property (nonatomic, readonly) PHAssetCollection *prototypeCollection;
@property (nonatomic, readonly) PHCollectionList *rootAlbumCollectionList;
@property (nonatomic, readonly) PHCollectionList *rootProjectCollectionList;
@property (nonatomic, readonly) PHAssetCollection *searchCollection;
@property (nonatomic, readonly) PHAssetCollection *sharedActivityCollection;
@property (nonatomic, readonly) PHCollectionList *sharedAlbumsAndActivityCollectionList;
@property (nonatomic, readonly) PHAssetCollection *sharedAlbumsCollection;
@property (nonatomic, readonly) PHCollectionList *sharedAlbumsCollectionList;

- (void).cxx_destruct;
- (id)allAlbumsCollection;
- (id)completeMyMomentCollection;
- (id)contentSyndicationCollection;
- (id)forYouCollection;
- (id)importHistoryCollection;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)mediaTypesCollectionList;
- (id)memoriesCollection;
- (id)momentsCollection;
- (id)myAlbumsCollection;
- (id)peopleCollection;
- (id)photoLibrary;
- (id)photosCollection;
- (id)prototypeCollection;
- (id)rootAlbumCollectionList;
- (id)rootProjectCollectionList;
- (id)searchCollection;
- (id)sharedActivityCollection;
- (id)sharedAlbumsAndActivityCollectionList;
- (id)sharedAlbumsCollection;
- (id)sharedAlbumsCollectionList;

@end
