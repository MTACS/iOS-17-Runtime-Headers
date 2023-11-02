
@interface _MKOfflineRegionsOverlayManager : NSObject <MKOverlayDrawableProvider, VKCustomFeatureDataSource> {
    NSArray * _currentCustomFeatures;
    MKMultiPolygon * _currentOverlay;
    GEOObserverHashTable * _customFeatureDataSourceObservers;
    int  _fullyLoadedSubscriptionsChangedNotifyToken;
    MKMapView * _mapView;
    NSString * _offlineCohortId;
    NSObject<OS_dispatch_queue> * _queue;
    int  _subscriptionsChangedNotifyToken;
    GEOMapDataSubscriptionManager * _subscriptionsManager;
    long long  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKMapView *mapView;
@property (readonly) Class superclass;
@property (nonatomic) long long visibility;

- (void).cxx_destruct;
- (void)_setOverlay:(id)arg1 customFeatures:(id)arg2;
- (void)_update;
- (void)addObserver:(id)arg1;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)clusterStyleAttributes;
- (id)createDrawableForOverlay:(id)arg1;
- (void)dealloc;
- (unsigned char)featureType;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (id)globalAnnotations;
- (id)initWithMapView:(id)arg1;
- (bool)isClusteringEnabled;
- (id)mapView;
- (void)removeObserver:(id)arg1;
- (unsigned char)sceneID;
- (unsigned char)sceneState;
- (void)setVisibility:(long long)arg1;
- (long long)visibility;

@end
