
@interface GEOPolylineCoordinateArray : NSObject <NSFastEnumeration, NSSecureCoding> {
    unsigned long long  _mutationsCount;
    struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> { 
        struct PolylineCoordinate {} *__begin_; 
        struct PolylineCoordinate {} *__end_; 
        struct __compressed_pair<geo::PolylineCoordinate *, std::allocator<geo::PolylineCoordinate>> { 
            struct PolylineCoordinate {} *__value_; 
        } __end_cap_; 
    }  _polylineCoordinates;
}

@property (nonatomic, readonly) unsigned long long count;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
