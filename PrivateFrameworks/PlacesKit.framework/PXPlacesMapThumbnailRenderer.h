
@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate> {
    long long  _countLabelStyle;
    PKExtendedTraitCollection * _extendedTraitCollection;
    id  _extendedTraitObserver;
    unsigned long long  _imageOptions;
    <PXPlacesMapGeotaggableInfoDelegate> * _informationDelegate;
    long long  _popoverImageType;
    <PXPlacesMapThumbnailCurationDelegate> * _thumbnailCurationDelegate;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (nonatomic, readonly) long long countLabelStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain) id extendedTraitObserver;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long imageOptions;
@property (retain) <PXPlacesMapGeotaggableInfoDelegate> *informationDelegate;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumEdgeInsets;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) long long popoverImageType;
@property (readonly) Class superclass;
@property (nonatomic) <PXPlacesMapThumbnailCurationDelegate> *thumbnailCurationDelegate;

- (void).cxx_destruct;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (long long)annotationType;
- (long long)countLabelStyle;
- (void)dealloc;
- (id)extendedTraitCollection;
- (id)extendedTraitObserver;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 networkAccessAllowed:(bool)arg3 andCompletion:(id /* block */)arg4;
- (unsigned long long)imageOptions;
- (id)informationDelegate;
- (id)init;
- (id)initWithTraitCollection:(id)arg1 informationDelegate:(id)arg2 popoverImageType:(long long)arg3 popoverImageOptions:(unsigned long long)arg4 thumbnailCurationDelegate:(id)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumEdgeInsets;
- (id)pipelineComponentProvider;
- (long long)popoverImageType;
- (void)reset;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setExtendedTraitObserver:(id)arg1;
- (void)setInformationDelegate:(id)arg1;
- (void)setPipelineComponentProvider:(id)arg1;
- (void)setThumbnailCurationDelegate:(id)arg1;
- (bool)supportsMoveAnimations;
- (id)thumbnailCurationDelegate;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;

@end
