
@interface VKMarkerFeatureHandle : NSObject {
    struct MarkerFeatureHandle { 
        unsigned char featureType; 
        long long featureIndex; 
        struct QuadTile { 
            unsigned char _type; 
            unsigned char _level; 
            int _yIdx; 
            int _xIdx; 
        } key; 
        int tileStyle; 
        unsigned int tileVersion; 
        struct shared_ptr<FeatureStyleAttributes> { 
            struct FeatureStyleAttributes {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } styleAttributes; 
    }  _actualHandle;
    int  _featureType;
    GEOFeatureStyleAttributes * _styleAttributes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)actualHandle;
- (long long)featureIndex;
- (int)featureType;
- (id)initWithMarkerHandle:(const void*)arg1 featureType:(int)arg2;
- (id)styleAttributes;
- (int)tileStyle;
- (unsigned int)tileVersion;
- (int)tileX;
- (int)tileY;
- (int)tileZ;

@end
