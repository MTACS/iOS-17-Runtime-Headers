
@interface PXCuratedLibraryAssetCollectionSkimmingInfo : NSObject {
    PXIndexPathSet * _childCollectionsIndexes;
    long long  _childCollectionsZoomLevel;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _currentChildCollectionIndexPath;
    <PXDisplayCollection> * _parentAssetCollection;
    bool  _slideshowStarted;
    bool  _touchInteractionStarted;
}

@property (nonatomic, retain) PXIndexPathSet *childCollectionsIndexes;
@property (nonatomic) long long childCollectionsZoomLevel;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } currentChildCollectionIndexPath;
@property (nonatomic, retain) <PXDisplayCollection> *parentAssetCollection;
@property (nonatomic) bool slideshowStarted;
@property (nonatomic) bool touchInteractionStarted;

- (void).cxx_destruct;
- (id)childCollectionsIndexes;
- (long long)childCollectionsZoomLevel;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })currentChildCollectionIndexPath;
- (id)parentAssetCollection;
- (void)setChildCollectionsIndexes:(id)arg1;
- (void)setChildCollectionsZoomLevel:(long long)arg1;
- (void)setCurrentChildCollectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setParentAssetCollection:(id)arg1;
- (void)setSlideshowStarted:(bool)arg1;
- (void)setTouchInteractionStarted:(bool)arg1;
- (bool)slideshowStarted;
- (bool)touchInteractionStarted;

@end
