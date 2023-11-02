
@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKNotificationObserverDelegate> {
    id /* block */  _completion;
    bool  _didBecomeFullyDrawn;
    bool  _didSoftDealloc;
    struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } * _displayStyles;
    unsigned long long  _displayStylesCount;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    struct unique_ptr<gdc::Timer, std::default_delete<gdc::Timer>> { 
        struct __compressed_pair<gdc::Timer *, std::default_delete<gdc::Timer>> { 
            struct Timer {} *__value_; 
        } __ptr_; 
    }  _expirationTimer;
    VKGlobeImageCanvas * _globeCanvas;
    bool  _hasFailedTiles;
    struct vector<CGImage *, std::allocator<CGImage *>> { 
        struct CGImage {} **__begin_; 
        struct CGImage {} **__end_; 
        struct __compressed_pair<CGImage **, std::allocator<CGImage *>> { 
            struct CGImage {} **__value_; 
        } __end_cap_; 
    }  _images;
    struct vector<__IOSurface *, std::allocator<__IOSurface *>> { 
        struct __IOSurface {} **__begin_; 
        struct __IOSurface {} **__end_; 
        struct __compressed_pair<__IOSurface **, std::allocator<__IOSurface *>> { 
            struct __IOSurface {} **__value_; 
        } __end_cap_; 
    }  _ioSurfaces;
    VKManifestTileGroupObserverProxy * _manifestTileGroupObserverProxy;
    VKMapImageCanvas * _mapCanvas;
    struct unique_ptr<md::MapEngine, md::MapEngineDeleter> { 
        struct __compressed_pair<md::MapEngine *, md::MapEngineDeleter> { 
            struct MapEngine {} *__value_; 
        } __ptr_; 
    }  _mapEngine;
    unsigned char  _mapKitClientMode;
    unsigned char  _mapKitUsage;
    int  _mapType;
    unsigned long long  _nextDisplayStyleIndex;
    VKNotificationObserver * _notificationObserver;
    GEOPOICategoryFilter * _pointsOfInterestFilter;
    VKRouteContext * _routeContext;
    <VKRouteOverlay> * _routeOverlay;
    unsigned long long  _signpostId;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    struct Stopwatch { 
        struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { 
            struct duration<long long, std::ratio<1, 1000000000>> { 
                long long __rep_; 
            } __d_; 
        } _startTime; 
    }  _timer;
    unsigned char  _usage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) unsigned char emphasis;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic) unsigned char mapKitClientMode;
@property (nonatomic) unsigned char mapKitUsage;
@property (nonatomic) int mapType;
@property (nonatomic, retain) GEOPOICategoryFilter *pointsOfInterestFilter;
@property (nonatomic, retain) VKRouteContext *routeContext;
@property (nonatomic, retain) <VKRouteOverlay> *routeOverlay;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsGlobe;
@property (nonatomic) bool showsHiking;
@property (nonatomic) bool showsHillshade;
@property (nonatomic) bool showsPointLabels;
@property (nonatomic) bool showsPointsOfInterest;
@property (nonatomic) bool showsRoadLabels;
@property (nonatomic) bool showsRoadShields;
@property (nonatomic) bool showsTintBands;
@property (nonatomic) bool showsTraffic;
@property (nonatomic) bool showsVenues;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) long long terrainMode;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (bool)supportsSharingThumbnails;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_daVinciDataAvailable;
- (bool)_elevatedGroundIsEnabled;
- (bool)_globeIsEnabled;
- (bool)_hikingIsAvailable;
- (bool)_hillshadeIsAvailable;
- (void*)_labelSettings;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
- (id)activeCanvas;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)addOverlay:(id)arg1;
- (bool)canChangeVenueFocus;
- (void)cancel;
- (void)cancelFlushingTileDecodes:(bool)arg1;
- (void)clearResources;
- (void)dealloc;
- (void)didFinishDaVinciTransition;
- (void)didFinishLoadingData;
- (void)didFinishLoadingDataWithError:(id)arg1;
- (void)didPresent;
- (void)didReceiveMemoryWarning;
- (void)didStartLoadingData;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)didUpdateVerticalYawTo:(double)arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (unsigned char)emphasis;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3 signpostId:(unsigned long long)arg4 mapType:(int)arg5 mapDisplayStyles:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; }*)arg6 mapDisplayStylesCount:(unsigned long long)arg7 auditToken:(id)arg8;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3 signpostId:(unsigned long long)arg4 mapType:(int)arg5 mapDisplayStyles:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; }*)arg6 mapDisplayStylesCount:(unsigned long long)arg7 auditToken:(id)arg8 useMultisampling:(bool)arg9 withError:(out id*)arg10;
- (bool)isChangingRegionWithoutAnimating;
- (void)labelManagerDidLayout;
- (void)labelMarkerDidChangeState:(const void*)arg1;
- (long long)labelScaleFactor;
- (bool)localizeLabels;
- (void)locationInHikingToolTipRegion:(unsigned long long)arg1;
- (unsigned char)mapKitClientMode;
- (unsigned char)mapKitUsage;
- (int)mapType;
- (void)nearestVenueDidChange:(const void*)arg1 building:(const void*)arg2;
- (id)pointsOfInterestFilter;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)renderNextSnapshot;
- (void)renderSnapshot:(id /* block */)arg1;
- (id)routeContext;
- (id)routeOverlay;
- (void)selectedLabelMarkerWillDisappear:(const void*)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setClearFontCache:(bool)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setLabelExclusionRegions:(id)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapKitClientMode:(unsigned char)arg1;
- (void)setMapKitUsage:(unsigned char)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(int)arg1;
- (void)setPointsOfInterestFilter:(id)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteOverlay:(id)arg1;
- (void)setSelectedTrailId:(unsigned long long)arg1;
- (void)setSelectedTrailWithId:(unsigned long long)arg1 name:(id)arg2 locale:(id)arg3;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsGlobe:(bool)arg1;
- (void)setShowsHiking:(bool)arg1;
- (void)setShowsHillshade:(bool)arg1;
- (void)setShowsPointLabels:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setShowsRoadLabels:(bool)arg1;
- (void)setShowsRoadShields:(bool)arg1;
- (void)setShowsTintBands:(bool)arg1;
- (void)setShowsTraffic:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (void)setTerrainMode:(long long)arg1;
- (bool)showsBuildings;
- (bool)showsGlobe;
- (bool)showsHiking;
- (bool)showsHillshade;
- (bool)showsPointLabels;
- (bool)showsPointsOfInterest;
- (bool)showsRoadLabels;
- (bool)showsRoadShields;
- (bool)showsTintBands;
- (bool)showsTraffic;
- (bool)showsVenues;
- (struct CGSize { double x1; double x2; })size;
- (void)softDealloc;
- (long long)terrainMode;
- (void)tileGroupDidChange;
- (void)tileGroupWillChange;
- (void)timeout;
- (bool)wantsTimerTick;
- (void)willBecomeFullyDrawn;
- (void)willLayoutWithTimestamp:(double)arg1 withContext:(void*)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_configureFromDefaults;
- (void)_mapkit_configureLabelSizesForContentSizeCategory:(id)arg1;
- (void)_mapkit_configureWithOptions:(id)arg1 configuration:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; }*)arg2 scale:(double)arg3;
- (id)initWithSnapshotOptions:(id)arg1 homeQueue:(id)arg2 auditToken:(id)arg3;

@end
