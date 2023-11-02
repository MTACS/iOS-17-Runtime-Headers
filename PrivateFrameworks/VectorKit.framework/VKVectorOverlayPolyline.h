
@interface VKVectorOverlayPolyline : NSObject {
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _elevations;
    struct vector<geo::Mercator2<double>, std::allocator<geo::Mercator2<double>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<geo::Mercator2<double> *, std::allocator<geo::Mercator2<double>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _points;
    struct unique_ptr<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> { 
        struct __compressed_pair<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> { 
            void *__value_; 
        } __ptr_; 
    }  _simplifiedGeometryCache;
    struct unfair_lock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } _lock; 
    }  _simplifiedGeometryCacheLock;
    struct Range<signed char> { 
        BOOL _min; 
        BOOL _max; 
    }  _worldIndexes;
}

@property (nonatomic, readonly) struct Range<signed char> { BOOL x1; BOOL x2; } worldIndexes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMapPoints:(const struct { double x1; double x2; }*)arg1 elevations:(const double*)arg2 count:(unsigned long long)arg3;
- (struct PolylineWithElevation { struct shared_ptr<std::vector<geo::Mercator2<double>>> { void *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct shared_ptr<std::vector<double>> { void *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; })simplifiedGeometryAtZoomLevel:(unsigned char)arg1;
- (struct Range<signed char> { BOOL x1; BOOL x2; })worldIndexes;

@end
