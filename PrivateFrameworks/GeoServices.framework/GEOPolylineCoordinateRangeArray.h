
@interface GEOPolylineCoordinateRangeArray : NSObject <NSFastEnumeration, NSSecureCoding> {
    unsigned long long  _mutationsCount;
    struct vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> { 
        struct GEOPolylineCoordinateRange {} *__begin_; 
        struct GEOPolylineCoordinateRange {} *__end_; 
        struct __compressed_pair<GEOPolylineCoordinateRange *, std::allocator<GEOPolylineCoordinateRange>> { 
            struct GEOPolylineCoordinateRange {} *__value_; 
        } __end_cap_; 
    }  _polylineCoordinateRanges;
}

@property (nonatomic, readonly) unsigned long long count;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoordinateRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; })coordinateRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
