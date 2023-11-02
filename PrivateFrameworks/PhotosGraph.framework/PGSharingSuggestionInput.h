
@interface PGSharingSuggestionInput : NSObject {
    NSArray * _assetLocalIdentifiers;
    PHFetchResult * _assets;
    PGGraph * _graph;
    NSArray * _momentLocalIdentifiers;
    NSArray * _momentNodes;
    PHFetchResult * _moments;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHFetchResult *assets;
@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) NSArray *momentNodes;
@property (nonatomic, readonly) PHFetchResult *moments;

- (void).cxx_destruct;
- (id)assets;
- (id)description;
- (id)graph;
- (id)initWithAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 graph:(id)arg3 photoLibrary:(id)arg4;
- (id)initWithMomentNodes:(id)arg1;
- (id)momentNodes;
- (id)moments;

@end
