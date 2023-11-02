
@interface VKGlobeLineContainer : NSObject {
    <VKGlobeLineContainerDelegate> * _delegate;
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { 
        struct __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _nonPersistentOverlays;
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { 
        struct __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _overlays;
    struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { 
        struct __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _persistentOverlays;
    struct map<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::allocator<std::pair<const geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> { 
        struct __tree<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>, std::allocator<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _polylinesToRoutes;
    struct set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> { 
        struct __tree<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<VKRouteOverlay>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<id<VKRouteOverlay>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _retainedOverlays;
    <VKRouteMatchedAnnotationPresentation> * _routeLineSplitAnnotation;
    void * _routeRenderLayer;
    struct VKGlobeRouteSplit { int (**x1)(); id x2; } * _routeSplit;
    struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKPolylineOverlay *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _selectedPolyline;
}

@property (nonatomic) <VKGlobeLineContainerDelegate> *delegate;
@property (nonatomic, retain) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addOverlay:(id)arg1;
- (void)_destroyLinesIfNeeded;
- (void)_recreateLinesIfNeeded;
- (void)_removeOverlay:(id)arg1;
- (void)_updateRouteSplit;
- (void)addLine:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { int (**x1)(); id x2; struct _retain_objc_arc { } x3; struct _release_objc_arc { } x4; })arg1;
- (void)addNonPersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)clearLineSelection;
- (void)dealloc;
- (id)delegate;
- (float)halfWidthForLine:(id)arg1 styleZ:(float)arg2;
- (bool)hasNonPersistentOverlay:(id)arg1;
- (bool)hasPersistentOverlay:(id)arg1;
- (id)initWithRouteRenderLayer:(void*)arg1;
- (const void*)nonPersistentOverlays;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (const void*)overlays;
- (const void*)persistentOverlays;
- (void)removeLine:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { int (**x1)(); id x2; struct _retain_objc_arc { } x3; struct _release_objc_arc { } x4; })arg1;
- (void)removeNonPersistentOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (id)routeLineSplitAnnotation;
- (void)setDelegate:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setSelected:(struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { int (**x1)(); id x2; struct _retain_objc_arc { } x3; struct _release_objc_arc { } x4; })arg1 selected:(bool)arg2;
- (void)update;

@end
