
@interface PKStrokeMask : NSObject {
    struct vector<_PKFloatRange, std::allocator<_PKFloatRange>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<_PKFloatRange *, std::allocator<_PKFloatRange>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _centerlineSlices;
    struct vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<ClipperLib::IntPoint> *, std::allocator<std::vector<ClipperLib::IntPoint>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _maskPaths;
}

@property (nonatomic, readonly) NSData *rawValue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_transformBy:(id /* block */)arg1;
- (id)bezierPath;
- (void)calculateCenterlineSlices:(id)arg1;
- (void*)centerlineSlices;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithBezierPath:(id)arg1 stroke:(id)arg2;
- (id)initWithMaskPaths:(const void*)arg1 centerlineSlices:(const void*)arg2;
- (id)initWithRawValue:(id)arg1;
- (void*)maskPaths;
- (id)maskTransformedBy:(id /* block */)arg1;
- (id)rawValue;
- (void)saveToArchive:(void*)arg1;

@end
