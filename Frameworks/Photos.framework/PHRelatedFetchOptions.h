
@interface PHRelatedFetchOptions : NSObject {
    bool  _debugInfoEnabled;
    bool  _enableDiversity;
    NSArray * _excludedAssetCollections;
    unsigned long long  _fetchLimit;
    PHPhotoLibrary * _photoLibrary;
    PHAsset * _referenceAsset;
}

@property (getter=isDebugInfoEnabled, nonatomic) bool debugInfoEnabled;
@property (nonatomic) bool enableDiversity;
@property (nonatomic, retain) NSArray *excludedAssetCollections;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PHAsset *referenceAsset;

- (void).cxx_destruct;
- (bool)enableDiversity;
- (id)excludedAssetCollections;
- (unsigned long long)fetchLimit;
- (bool)isDebugInfoEnabled;
- (id)photoLibrary;
- (id)referenceAsset;
- (void)setDebugInfoEnabled:(bool)arg1;
- (void)setEnableDiversity:(bool)arg1;
- (void)setExcludedAssetCollections:(id)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setReferenceAsset:(id)arg1;

@end
