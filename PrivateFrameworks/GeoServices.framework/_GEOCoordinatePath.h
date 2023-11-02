
@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {
    struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOLocationCoordinate3D *, std::allocator<GEOLocationCoordinate3D>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _basicCoordinates;
    unsigned long long  _count;
    unsigned long long  _pathStartIndex;
    double  _pathStartOffset;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _pointLengths;
    NSArray * _supportPoints;
    struct vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> { 
        struct ControlPoint {} *__begin_; 
        struct ControlPoint {} *__end_; 
        struct __compressed_pair<zilch::ControlPoint *, std::allocator<zilch::ControlPoint>> { 
            struct ControlPoint {} *__value_; 
        } __end_cap_; 
    }  _zilchPoints;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
