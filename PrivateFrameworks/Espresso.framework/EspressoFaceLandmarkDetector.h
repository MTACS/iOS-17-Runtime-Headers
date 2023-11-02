
@interface EspressoFaceLandmarkDetector : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _newface;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  crop_192;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  crop_scaled;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  net;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  net_detect;
    struct vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<Espresso::net> *, std::allocator<std::shared_ptr<Espresso::net>>> { 
            void *__value_; 
        } __end_cap_; 
    }  nets_sub_landmark;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } newface;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)commonInit:(id)arg1 context:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg2 platform:(int)arg3 computePath:(int)arg4;
- (void)dealloc;
- (struct vector<FaceLandmarkDetectorPoint, std::allocator<FaceLandmarkDetectorPoint>> { struct FaceLandmarkDetectorPoint {} *x1; struct FaceLandmarkDetectorPoint {} *x2; struct __compressed_pair<FaceLandmarkDetectorPoint *, std::allocator<FaceLandmarkDetectorPoint>> { struct FaceLandmarkDetectorPoint {} *x_3_1_1; } x3; })detect:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 face:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 sublandmark:(bool)arg3 doFaceRectFix:(bool)arg4;
- (struct vector<FaceLandmarkDetectorPoint, std::allocator<FaceLandmarkDetectorPoint>> { struct FaceLandmarkDetectorPoint {} *x1; struct FaceLandmarkDetectorPoint {} *x2; struct __compressed_pair<FaceLandmarkDetectorPoint *, std::allocator<FaceLandmarkDetectorPoint>> { struct FaceLandmarkDetectorPoint {} *x_3_1_1; } x3; })detectInImageRect:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 face:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 sublandmark:(bool)arg3;
- (struct vector<FaceLandmarkDetectorPoint, std::allocator<FaceLandmarkDetectorPoint>> { struct FaceLandmarkDetectorPoint {} *x1; struct FaceLandmarkDetectorPoint {} *x2; struct __compressed_pair<FaceLandmarkDetectorPoint *, std::allocator<FaceLandmarkDetectorPoint>> { struct FaceLandmarkDetectorPoint {} *x_3_1_1; } x3; })extractSubLandmarksFromCrop192:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 centers192:(void*)arg2;
- (id)init;
- (id)initWithNetworkAtPath:(id)arg1 context:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg2 platform:(int)arg3 computePath:(int)arg4;
- (id)initWithNetworkAtPath:(id)arg1 contextObjC:(id)arg2 platform:(int)arg3 computePath:(int)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })newface;
- (void)setNewface:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
