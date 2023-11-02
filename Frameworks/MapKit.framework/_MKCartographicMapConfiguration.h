
@interface _MKCartographicMapConfiguration : MKMapConfiguration {
    struct { 
        long long style; 
        long long emphasis; 
        long long projection; 
        long long terrainMode; 
        long long mapkitUsage; 
        long long mapkitClientMode; 
        bool gridOnly; 
    }  _cartographicConfiguration;
    bool  _showsHiking;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; } cartographicConfiguration;
@property (getter=_showsHiking, setter=_setShowsHiking:, nonatomic) bool showsHiking;

+ (bool)supportsSecureCoding;

- (void)_addObserver:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3;
- (void)_removeObserver:(id)arg1 context:(void*)arg2;
- (void)_setShowsHiking:(bool)arg1;
- (bool)_showsHiking;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })cartographicConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCartographicConfiguration:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCartographicMapConfiguration:(id)arg1;

@end
