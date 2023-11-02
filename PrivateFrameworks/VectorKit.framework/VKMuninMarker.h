
@interface VKMuninMarker : NSObject {
    struct optional<md::mun::CollectionPoint> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[1864]; 
            struct CollectionPoint { 
                unsigned long long pointId; 
                struct RigidTransform<double, float> { 
                    struct Matrix<double, 3, 1> { 
                        double _e[3]; 
                    } _translation; 
                    struct Quaternion<float> { 
                        struct Matrix<float, 3, 1> { 
                            float _e[3]; 
                        } _imaginary; 
                        float _scalar; 
                    } _rotation; 
                } frame; 
                struct Unit<geo::RadianUnitDescription, float> { 
                    float _value; 
                } heading; 
                struct Mercator3<double> { 
                    double _e[3]; 
                } mercatorPosition; 
                unsigned long long time; 
                struct small_vector<md::mun::PhotoInfo, 6UL> { 
                    struct PhotoInfo {} *_begin; 
                    struct PhotoInfo {} *_end; 
                    struct PhotoInfo {} *_fixedStorage; 
                    unsigned long long _capacity; 
                    struct type { 
                        unsigned char __lx[288]; 
                    } storage[6]; 
                } photos; 
                float heightAboveGroundMeters; 
                unsigned int buildId; 
                unsigned short bucketId; 
                unsigned char type; 
                unsigned char dataType; 
                unsigned char texturedLodMask; 
            } type; 
        } _value; 
    }  _collectionPoint;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _coordinate;
}

@property (nonatomic, readonly) unsigned int buildId;
@property (nonatomic, readonly) bool canMoveToMarker;
@property (nonatomic, readonly) NSDate *collectionDate;
@property (nonatomic, readonly) const void*collectionPoint;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } coordinate;
@property (nonatomic, readonly) unsigned long long pointId;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)buildId;
- (bool)canMoveToMarker;
- (id)collectionDate;
- (const void*)collectionPoint;
- (struct { double x1; double x2; double x3; })coordinate;
- (id)initWithCollectionPoint:(const void*)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (unsigned long long)pointId;

@end
