
@interface ARPlaneWorld : NSObject {
    ARGPUWarper * _gpuWarper;
    struct map<std::array<unsigned char, 16>, ARTexturedPlane, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, ARTexturedPlane>>> { 
        struct __tree<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>>, std::allocator<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _planes;
    struct ARPlaneUpdateQueue { 
        struct queue<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> { 
            struct deque<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> { 
                struct __split_buffer<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>> { 
                    void **__first_; 
                    void **__begin_; 
                    void **__end_; 
                    struct __compressed_pair<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> **, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane> *>> { 
                        void **__value_; 
                    } __end_cap_; 
                } __map_; 
                unsigned long long __start_; 
                struct __compressed_pair<unsigned long, std::allocator<std::pair<std::array<unsigned char, 16>, ARTexturedPlane>>> { 
                    unsigned long long __value_; 
                } __size_; 
            } c; 
        } queue; 
        struct set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> { 
            struct __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } elements; 
    }  _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    unsigned long long  _textureSize;
}

+ (struct map<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>> { struct __tree<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>>, std::allocator<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, std::set<std::array<unsigned char, 16>>>, std::less<std::array<unsigned char, 16>>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })findMergedPlanes:(const void*)arg1 :(const void*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fullDescription;
- (id)init;
- (id)initWithTextureSize:(unsigned long long)arg1;
- (bool)isBusy;
- (struct vector<ARTexturedPlane, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane {} *x1; struct ARTexturedPlane {} *x2; struct __compressed_pair<ARTexturedPlane *, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane {} *x_3_1_1; } x3; })planes;
- (void)updatePlanes:(const void*)arg1 withCameraImage:(struct __CVBuffer { }*)arg2 exposureOffset:(float)arg3 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 synchronous:(bool)arg6;
- (struct map<std::array<unsigned char, 16>, ARTexturedPlane, std::less<std::array<unsigned char, 16>>, std::allocator<std::pair<const std::array<unsigned char, 16>, ARTexturedPlane>>> { struct __tree<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>>, std::allocator<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::array<unsigned char, 16>, std::__value_type<std::array<unsigned char, 16>, ARTexturedPlane>, std::less<std::array<unsigned char, 16>>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })updatePlanes:(const void*)arg1 withCurrentDetections:(const void*)arg2 synchronous:(bool)arg3;

@end
