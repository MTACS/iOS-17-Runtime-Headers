
@interface VKCustomFeature : NSObject <NSSecureCoding> {
    <VKCustomFeatureDataSource> * _dataSource;
    struct shared_ptr<md::LabelExternalFeature> { 
        struct LabelExternalFeature {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _feature;
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        GEOFeatureStyleAttributes *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _featureStyleAttributesPtr;
    NSString * _imageKey;
    <VKCustomImageProvider> * _imageProvider;
    bool  _isGlobalFeature;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initInternalFeatureWithCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (id)_initWithCoordinate:(struct { double x1; double x2; double x3; })arg1 isInjected:(bool)arg2;
- (unsigned long long)businessID;
- (unsigned long long)clientFeatureID;
- (unsigned char)clusteringMode;
- (id)customImageKey;
- (id)dataSource;
- (void)encodeWithCoder:(id)arg1;
- (void*)feature;
- (unsigned long long)featureID;
- (id)imageProvider;
- (id)init;
- (id)initLineWithCoordinates:(const struct { double x1; double x2; double x3; }*)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate3D:(struct { double x1; double x2; double x3; })arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (bool)isGlobalFeature;
- (bool)isInjectedFeature;
- (bool)isLineFeature;
- (bool)isPointFeature;
- (void*)lineFeature;
- (void*)pointFeature;
- (void)setAnnotationText:(id)arg1 locale:(id)arg2;
- (void)setBuildingFaceAzimuth:(float)arg1;
- (void)setBuildingHeight:(float)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setClientFeatureID:(unsigned long long)arg1;
- (void)setClusteringMode:(unsigned char)arg1;
- (void)setDataSource:(id)arg1;
- (void)setElevationOffset:(double)arg1;
- (void)setFeatureID:(unsigned long long)arg1;
- (void)setFeatureRegion:(id)arg1;
- (void)setImageProvider:(id)arg1 withKey:(id)arg2;
- (void)setMaxZoom:(float)arg1;
- (void)setMinZoom:(float)arg1;
- (void)setPlaceholderIconWithSize:(struct CGSize { double x1; double x2; })arg1 anchorPoint:(struct CGPoint { double x1; double x2; })arg2 isRound:(bool)arg3;
- (void)setSortKey:(int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setText:(id)arg1 locale:(id)arg2;
- (void)setTextDisplayMode:(unsigned char)arg1;
- (void)setVenueBuildingID:(unsigned long long)arg1;
- (void)setVenueComponentID:(unsigned long long)arg1;
- (void)setVenueFloorOrdinal:(short)arg1;
- (void)setVenueID:(unsigned long long)arg1;
- (void)setVenueLevelID:(unsigned long long)arg1;
- (id)styleAttributes;
- (unsigned long long)venueBuildingID;
- (unsigned long long)venueComponentID;
- (short)venueFloorOrdinal;
- (unsigned long long)venueID;
- (unsigned long long)venueLevelID;

@end
