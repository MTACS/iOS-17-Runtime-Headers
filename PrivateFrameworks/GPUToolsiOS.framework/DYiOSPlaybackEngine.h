
@interface DYiOSPlaybackEngine : DYPlaybackEngine <DYLayerManager> {
    struct map<CALayer *, bool, std::less<CALayer *>, std::allocator<std::pair<CALayer *const, bool>>> { 
        struct __tree<std::__value_type<CALayer *, bool>, std::__map_value_compare<CALayer *, std::__value_type<CALayer *, bool>, std::less<CALayer *>>, std::allocator<std::__value_type<CALayer *, bool>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *, bool>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *, std::__value_type<CALayer *, bool>, std::less<CALayer *>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _coreAnimationLayerMap;
    CALayer * _hostLayer;
    struct map<CALayer *__unsafe_unretained, bool, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, bool>>> { 
        struct __tree<std::__value_type<CALayer *__unsafe_unretained, bool>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, bool>, std::less<CALayer *__unsafe_unretained>>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, bool>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, bool>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, bool>, std::less<CALayer *__unsafe_unretained>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _hostLayerSublayersVisibilityMap;
    long long  _interfaceOrientation;
    struct map<unsigned long long, CALayer *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, CALayer *>>> { 
        struct __tree<std::__value_type<unsigned long long, CALayer *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, CALayer *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, CALayer *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, CALayer *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, CALayer *>, std::less<unsigned long long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _layerMap;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenCenter;
    CALayer * _topLayer;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

+ (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_convertToCATransform3D:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1;
+ (struct CGPoint { double x1; double x2; })_convertToCGPoint:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_applyInterfaceOrientationToTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)_setupLayer:(id)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentsScale:(double)arg3 properties:(id)arg4 isCoreAnimationSurface:(bool)arg5;
- (void)applyLayersVisibility;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForCurrentInterfaceOrientation;
- (id)createLayerWithID:(unsigned long long)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentsScale:(double)arg3 properties:(id)arg4 isCoreAnimationSurface:(bool)arg5;
- (id)currentTopLayer;
- (double)defaultContentsScale;
- (void)deleteLayer:(unsigned long long)arg1;
- (id)initWithCaptureStore:(id)arg1;
- (id)initWithCaptureStore:(id)arg1 shouldCreateViewController:(bool)arg2;
- (id)layerForID:(unsigned long long)arg1;
- (bool)layerHasSameProperties:(id)arg1 layer:(id)arg2;
- (id)newLayer;
- (void)prepareLayerForPresent:(id)arg1;
- (void)resetLayersVisibility;
- (void)setAnchorPoint:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1 forLayerID:(unsigned long long)arg2;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setPosition:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1 forLayerID:(unsigned long long)arg2;
- (void)setProperties:(id)arg1 forLayer:(id)arg2;
- (void)setTransform:(const struct Argument { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned short x6; }*)arg1 forLayerID:(unsigned long long)arg2 withScreenToLayerScale:(const void*)arg3;
- (void)updateLayer:(id)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentsScale:(double)arg3 properties:(id)arg4;
- (id)viewController;

@end
