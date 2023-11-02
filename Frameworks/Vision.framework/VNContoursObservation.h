
@interface VNContoursObservation : VNObservation {
    NSData * _compressedPoints;
    struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _contourChildrenIndices;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGPath { } * _normalizedPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pathLock;
    struct shared_ptr<apple::vision::libraries::autotrace::EPolygonList> { 
        struct EPolygonList {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _polygonList;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _topLevelContoursIndices;
}

@property (readonly) long long contourCount;
@property (readonly) struct CGPath { }*normalizedPath;
@property (readonly) long long topLevelContourCount;
@property (readonly) NSArray *topLevelContours;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_initializePolygonContainers;
- (const void*)childContourIndicesAtIndex:(long long)arg1;
- (id)contourAtIndex:(long long)arg1 error:(id*)arg2;
- (id)contourAtIndexPath:(id)arg1 error:(id*)arg2;
- (long long)contourCount;
- (void)dealloc;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 compressedPoints:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)normalizedPath;
- (struct CGPath { }*)normalizedPathInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (const struct EPolygonList { int x1; int x2; struct EPolygon {} *x3; int x4; }*)polygonList;
- (long long)topLevelContourCount;
- (id)topLevelContours;
- (id)vn_cloneObject;

@end
