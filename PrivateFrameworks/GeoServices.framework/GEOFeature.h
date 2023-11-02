
@interface GEOFeature : NSObject {
    GEOFeatureStyleAttributes * _attributes;
    GEOVectorTile * _containingTile;
    void * _feature;
}

@property (nonatomic, readonly) GEOFeatureStyleAttributes *attributes;
@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) GEOVectorTile *containingTile;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly) unsigned long long flyoverAnimationID;
@property (nonatomic, readonly) bool hasBusinessID;
@property (nonatomic, readonly) unsigned long long labelCount;
@property (nonatomic, readonly) unsigned long long labelOffset;
@property (nonatomic, readonly) float minZoomRank;
@property (nonatomic, readonly) const char *name;
@property (nonatomic, readonly) unsigned long long shieldCount;
@property (nonatomic, readonly) unsigned long long shieldOffset;
@property (nonatomic, readonly) unsigned int styleID;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)attributes;
- (unsigned long long)businessID;
- (id)containingTile;
- (void)dealloc;
- (unsigned long long)featureID;
- (unsigned long long)flyoverAnimationID;
- (void*)get;
- (bool)hasBusinessID;
- (id)init:(void*)arg1 withVectorTile:(id)arg2;
- (unsigned long long)labelCount;
- (unsigned long long)labelOffset;
- (float)minZoomRank;
- (const char *)name;
- (unsigned long long)shieldCount;
- (unsigned long long)shieldOffset;
- (unsigned int)styleID;
- (int)type;

@end
