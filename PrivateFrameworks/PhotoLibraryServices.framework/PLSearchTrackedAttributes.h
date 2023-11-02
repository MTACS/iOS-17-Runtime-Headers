
@interface PLSearchTrackedAttributes : NSObject {
    NSArray * _assetAttributesTrackedForSearch;
    NSArray * _detectedFaceAttributesTrackedForSearch;
    NSArray * _fetchingAlbumAttributesTrackedForSearch;
    NSArray * _highlightAttributesTrackedForSearch;
    NSArray * _managedAlbumAttributesTrackedForSearch;
    NSArray * _mediaAnalysisAssetAttributesTrackedForSearch;
    NSArray * _memoryAttributesTrackedForSearch;
    NSArray * _personAttributesTrackedForSearch;
}

@property (nonatomic, retain) NSArray *assetAttributesTrackedForSearch;
@property (nonatomic, retain) NSArray *detectedFaceAttributesTrackedForSearch;
@property (nonatomic, retain) NSArray *fetchingAlbumAttributesTrackedForSearch;
@property (nonatomic, retain) NSArray *highlightAttributesTrackedForSearch;
@property (nonatomic, retain) NSArray *managedAlbumAttributesTrackedForSearch;
@property (nonatomic, retain) NSArray *mediaAnalysisAssetAttributesTrackedForSearch;
@property (nonatomic, retain) NSArray *memoryAttributesTrackedForSearch;
@property (nonatomic, retain) NSArray *personAttributesTrackedForSearch;

- (void).cxx_destruct;
- (id)assetAttributesTrackedForSearch;
- (id)detectedFaceAttributesTrackedForSearch;
- (id)fetchingAlbumAttributesTrackedForSearch;
- (id)highlightAttributesTrackedForSearch;
- (id)managedAlbumAttributesTrackedForSearch;
- (id)mediaAnalysisAssetAttributesTrackedForSearch;
- (id)memoryAttributesTrackedForSearch;
- (id)personAttributesTrackedForSearch;
- (void)setAssetAttributesTrackedForSearch:(id)arg1;
- (void)setDetectedFaceAttributesTrackedForSearch:(id)arg1;
- (void)setFetchingAlbumAttributesTrackedForSearch:(id)arg1;
- (void)setHighlightAttributesTrackedForSearch:(id)arg1;
- (void)setManagedAlbumAttributesTrackedForSearch:(id)arg1;
- (void)setMediaAnalysisAssetAttributesTrackedForSearch:(id)arg1;
- (void)setMemoryAttributesTrackedForSearch:(id)arg1;
- (void)setPersonAttributesTrackedForSearch:(id)arg1;

@end
