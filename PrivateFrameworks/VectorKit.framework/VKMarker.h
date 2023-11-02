
@interface VKMarker : NSObject {
    struct shared_ptr<md::Marker> { 
        struct Marker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _actualMarker;
    int  _markerType;
    GEOFeatureStyleAttributes * _styleAttributes;
}

@property (readonly) const void*actualMarker;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly) int markerType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) unsigned long long venueID;

+ (id)markerWithFeatureMarker:(const void*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)actualMarker;
- (void)dealloc;
- (id)featureHandles;
- (unsigned long long)featureID;
- (id)initWithFeatureMarkerPtr:(const void*)arg1 markerType:(int)arg2;
- (int)markerType;
- (id)name;
- (id)shortName;
- (id)styleAttributes;
- (unsigned long long)venueID;

@end
