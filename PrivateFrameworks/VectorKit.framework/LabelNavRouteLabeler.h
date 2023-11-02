
@interface LabelNavRouteLabeler : NSObject {
    struct vector<std::shared_ptr<md::NavLabel>, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<md::NavLabel> *, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>> { 
            void *__value_; 
            struct StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _activeSigns;
    void * _artworkCache;
    struct vector<md::AvoidanceRectWithPriority, geo::StdAllocator<md::AvoidanceRectWithPriority, mdm::Allocator>> { 
        struct AvoidanceRectWithPriority {} *__begin_; 
        struct AvoidanceRectWithPriority {} *__end_; 
        struct __compressed_pair<md::AvoidanceRectWithPriority *, geo::StdAllocator<md::AvoidanceRectWithPriority, mdm::Allocator>> { 
            struct AvoidanceRectWithPriority {} *__value_; 
            struct StdAllocator<md::AvoidanceRectWithPriority, mdm::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _avoidanceRects;
    bool  _checkIfRouteSubrangeChanged;
    bool  _checkOnRouteLabelsAlignment;
    unsigned long long  _countVisibleOffRouteRoadSigns;
    unsigned long long  _countVisibleOnRouteRoadSigns;
    unsigned long long  _countVisibleRoadSigns;
    NSString * _currentLocationText;
    NSString * _currentRoadName;
    long long  _currentRoadNameIndex;
    struct shared_ptr<md::NavCurrentRoadSign> { 
        struct NavCurrentRoadSign {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _currentRoadSign;
    NSString * _currentShieldGroup;
    unsigned long long  _debugCachedMaxVisibleOffRouteRoadSigns;
    unsigned long long  _debugCachedMaxVisibleOnRouteRoadSigns;
    bool  _debugDisableRoadSignLimit;
    bool  _debugEnableShieldsOnRouteLine;
    bool  _disableTileParseForOneLayout;
    bool  _drawRoadSigns;
    NSMutableArray * _fadingLabels;
    NSMutableArray * _guidanceStepInfos;
    bool  _hasPendingTilesInSnappingRegion;
    bool  _isCurrentRoadSignVisible;
    bool  _isOnRoute;
    bool  _isStylesheetAnimating;
    NSMutableArray * _junctions;
    struct range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction, std::less<geo::Unit<geo::RadianUnitDescription, float>>, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> { 
        struct map<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> { 
            struct __tree<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare>, std::allocator<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _storage; 
    }  _leftTurnOrientations;
    unsigned long long  _maxOnRoadGraphRoadSigns;
    unsigned long long  _maxVisibleOffRouteRoadSigns;
    unsigned long long  _maxVisibleOnRouteRoadSigns;
    unsigned long long  _maxVisibleRoadSigns;
    float  _minSignOffsetDistance;
    unsigned long long  _minVisibleOffRoadGraphRoadSigns;
    unsigned long long  _minVisibleProceedToRouteRoadSigns;
    bool  _needsDebugConsoleClear;
    bool  _needsLayout;
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> { 
        struct __hash_table<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> { 
                        struct __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> { 
                            unsigned long long __value_; 
                            struct StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator> { 
                                struct Allocator {} *_allocator; 
                            } __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *>, geo::StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator>> { 
                struct __hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> { 
                    void *__next_; 
                } __value_; 
                struct StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<std::shared_ptr<md::LabelTile>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<std::shared_ptr<md::LabelTile>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pendingTiles;
    bool  _preferRightSideLabelPlacement;
    bool  _regenerateRoadSigns;
    struct range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction, std::less<geo::Unit<geo::RadianUnitDescription, float>>, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> { 
        struct map<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> { 
            struct __tree<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare>, std::allocator<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _storage; 
    }  _rightTurnOrientations;
    VKLabelNavRoadGraph * _roadGraph;
    NSMutableSet * _roadNamesInGuidance;
    VKPolylineOverlay * _route;
    NSMutableArray * _routeRoadInfos;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeSubrangeEnd;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeSubrangeStart;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeUserOffset;
    bool  _shouldLabelOppositeCarriageways;
    unsigned long long  _stepIndex;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> { 
        struct __hash_table<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> { 
                        struct __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> { 
                            unsigned long long __value_; 
                            struct StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator> { 
                                struct Allocator {} *_allocator; 
                            } __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *>, geo::StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator>> { 
                struct __hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> { 
                    void *__next_; 
                } __value_; 
                struct StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<std::shared_ptr<md::LabelTile>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<std::shared_ptr<md::LabelTile>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _tiles;
    bool  _useRouteSubrange;
    NSMutableArray * _visibleLabels;
    NSMutableDictionary * _visibleLabelsByName;
    NSMutableSet * _visibleShieldGroups;
    struct vector<std::shared_ptr<md::NavLabel>, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<md::NavLabel> *, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>> { 
            void *__value_; 
            struct StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _visibleSigns;
}

@property (nonatomic, readonly) const void*activeSigns;
@property (nonatomic) void*artworkCache;
@property (nonatomic, retain) NSString *currentLocationText;
@property (nonatomic, retain) NSString *currentRoadName;
@property (nonatomic, readonly) void*currentRoadSign;
@property (nonatomic, readonly) float currentRoadSignPixelHeight;
@property (nonatomic, retain) NSString *currentShieldGroup;
@property (nonatomic) bool debugDisableRoadSignLimit;
@property (nonatomic) bool debugEnableShieldsOnRouteLine;
@property (nonatomic) bool drawRoadSigns;
@property (nonatomic, readonly) bool needsLayout;
@property (nonatomic, retain) VKPolylineOverlay *route;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;
@property (nonatomic, readonly) const void*visibleSigns;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addJunctionsForTile:(const void*)arg1;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2 maxLabelsToAdd:(unsigned long long)arg3;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2 maxLabelsToAdd:(unsigned long long)arg3 useAllJunctions:(bool)arg4 placeShieldsFrontToBack:(bool)arg5;
- (void)_addVisibleSigns;
- (bool)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(bool)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg3 hopOffsetDistance:(float)arg4;
- (void)_dedupOffRouteRoads;
- (bool)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(void*)arg2 lookBackward:(bool)arg3 firstOverlap:(long long*)arg4 secondOverlap:(long long*)arg5;
- (void)_generateCurrentRoadSignWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1;
- (void)_initalizeCurrentRoadInfo;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2 labelCollisionEnabled:(bool)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2 labelCollisionEnabled:(bool)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(bool)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg3 labelCollisionEnabled:(bool)arg4;
- (bool)_updateActiveRouteRange;
- (void)_updateCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadStarts;
- (void)_updateRoadsInGuidance;
- (void)_updateUniqueOffRouteRoads;
- (const void*)activeSigns;
- (void*)artworkCache;
- (void)clearSceneIsMemoryWarning:(bool)arg1;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const void*)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg3;
- (struct RoadSignOrientationResolver { void *x1; struct Unit<geo::RadianUnitDescription, float> { float x_2_1_1; } x2; unsigned char x3; })createRoadSignOrientationResolver:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2;
- (id)currentLocationText;
- (id)currentRoadName;
- (void*)currentRoadSign;
- (float)currentRoadSignPixelHeight;
- (id)currentShieldGroup;
- (bool)debugDisableRoadSignLimit;
- (void)debugDraw:(id)arg1 overlayConsole:(void*)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg3;
- (bool)debugEnableShieldsOnRouteLine;
- (void)drawNavOverlayDebugView:(void*)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2;
- (void)drawRoadSignOrientationDebugView:(void*)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg2;
- (bool)drawRoadSigns;
- (void)grabTilesFromScene:(const void*)arg1;
- (id)init;
- (bool)isNavMode;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 avoidanceRects:(const void*)arg2;
- (bool)needsDebugDraw;
- (bool)needsLayout;
- (unsigned char)orientationForRoadSign:(id)arg1 roadLabel:(id)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg3;
- (unsigned char)resolveOrientation:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct MapNavLabeler {} *x3; struct LabelLayoutContext {} *x4; struct LabelNavLayoutContext {} *x5; }*)arg1 road:(id)arg2 currentOrientation:(unsigned char)arg3;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)setArtworkCache:(void*)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setCurrentShieldGroup:(id)arg1;
- (void)setDebugDisableRoadSignLimit:(bool)arg1;
- (void)setDebugEnableShieldsOnRouteLine:(bool)arg1;
- (void)setDrawRoadSigns:(bool)arg1;
- (void)setMaxVisibleRoadsigns:(unsigned int)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)styleManagerDidChange:(bool)arg1;
- (void)styleManagerDidFinishAnimating;
- (void)styleManagerDidStartAnimating;
- (const void*)visibleSigns;

@end
