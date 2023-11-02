
@interface RouteRenderLayerObserverProxy : NSObject <VKPolylineGroupOverlayObserver> {
    struct set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { 
        struct __tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<VKPolylineGroupOverlay *, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<VKPolylineGroupOverlay *>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _observedGroupsSet;
    struct PolylineGroupChangeObserver { int (**x1)(); } * _polylineGroupObserver;
    struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _retainedGroups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPolylineGroupObserver:(struct PolylineGroupChangeObserver { int (**x1)(); }*)arg1;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didFocusPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;

@end
