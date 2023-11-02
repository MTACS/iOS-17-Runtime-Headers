
@interface PXPlacesSnapshotOptions : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalInsets;
    NSString * _cacheDirectoryPath;
    PKExtendedTraitCollection * _extendedTraitCollection;
    <PXPlacesMapGeotaggableInfoDelegate> * _geotaggableInformationDelegate;
    <PXPlacesMapThumbnailCurationDelegate> * _mapThumbnailCurationDelegate;
    long long  _popoverImageType;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
    bool  _shouldRenderThumbnailForNoLocation;
    bool  _shouldSkipPlaceholder;
    bool  _showsPointLabels;
    unsigned long long  _snapshotMapType;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    double  _visibleDistance;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalInsets;
@property (nonatomic, retain) NSString *cacheDirectoryPath;
@property (nonatomic, retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, retain) <PXPlacesMapGeotaggableInfoDelegate> *geotaggableInformationDelegate;
@property (nonatomic) <PXPlacesMapThumbnailCurationDelegate> *mapThumbnailCurationDelegate;
@property (nonatomic) long long popoverImageType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic) bool shouldRenderThumbnailForNoLocation;
@property (nonatomic) bool shouldSkipPlaceholder;
@property (nonatomic) bool showsPointLabels;
@property (nonatomic) unsigned long long snapshotMapType;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic) double visibleDistance;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalInsets;
- (id)cacheDirectoryPath;
- (id)description;
- (id)extendedTraitCollection;
- (id)geotaggableInformationDelegate;
- (id)init;
- (id)mapThumbnailCurationDelegate;
- (long long)popoverImageType;
- (id)queue;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)setAdditionalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCacheDirectoryPath:(id)arg1;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setGeotaggableInformationDelegate:(id)arg1;
- (void)setMapThumbnailCurationDelegate:(id)arg1;
- (void)setPopoverImageType:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldRenderThumbnailForNoLocation:(bool)arg1;
- (void)setShouldSkipPlaceholder:(bool)arg1;
- (void)setShowsPointLabels:(bool)arg1;
- (void)setSnapshotMapType:(unsigned long long)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleDistance:(double)arg1;
- (bool)shouldRenderThumbnailForNoLocation;
- (bool)shouldSkipPlaceholder;
- (bool)showsPointLabels;
- (unsigned long long)snapshotMapType;
- (struct CGSize { double x1; double x2; })viewSize;
- (double)visibleDistance;

@end
