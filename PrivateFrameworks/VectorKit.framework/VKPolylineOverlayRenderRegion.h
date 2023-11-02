
@interface VKPolylineOverlayRenderRegion : NSObject {
    struct set<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>> { 
        struct __tree<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<md::RouteLineData>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<std::shared_ptr<md::RouteLineData>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _routeLineDatas;
    struct MultiRectRegion { 
        struct set<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> { 
            struct __tree<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<gm::Box<double, 2>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, md::MultiRectSetCompare> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _rects; 
        struct Box<double, 2> { 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _minimum; 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _maximum; 
        } _enclosingRect; 
    }  _snappingRegion;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _visibleRect;
}

@property (nonatomic, readonly) const void*routeLineDatas;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  visibleRect; /* unknown property attribute:  1>=[2d]}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initForVisibleRect:(const void*)arg1 snappingRegion:(const void*)arg2 routeLineDatas:(const void*)arg3;
- (bool)isEquivalentToNewRegion:(id)arg1;
- (const void*)routeLineDatas;
- (const void*)snappingRegion;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })visibleRect;

@end
