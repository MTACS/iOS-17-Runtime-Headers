
@interface GEOBuildingFootprintFeature : NSObject {
    void * _buildingFootprintFeature;
    GEOMultiSectionFeature * _multiSectionFeature;
}

- (void).cxx_destruct;
- (unsigned long long)baseOffset;
- (unsigned long long)extrusionOffset;
- (id)feature;
- (void*)get;
- (bool)hasLandmark;
- (id)init:(void*)arg1 withVectorTile:(id)arg2;
- (bool)isForTransit;

@end
