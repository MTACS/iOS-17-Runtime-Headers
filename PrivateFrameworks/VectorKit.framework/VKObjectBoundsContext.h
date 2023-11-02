
@interface VKObjectBoundsContext : NSObject {
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgePadding;
    struct vector<gm::Matrix<double, 2, 1>, std::allocator<gm::Matrix<double, 2, 1>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::allocator<gm::Matrix<double, 2, 1>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _points;
}

@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgePadding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(const void*)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgePadding;
- (bool)isEmpty;
- (void)setEdgePadding:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
