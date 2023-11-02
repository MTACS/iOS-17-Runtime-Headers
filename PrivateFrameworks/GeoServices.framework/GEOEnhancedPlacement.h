
@interface GEOEnhancedPlacement : NSObject {
    NSNumber * _buildingFaceAzimuth;
    NSNumber * _buildingHeightInMeters;
    NSArray * _buildingIds;
    NSNumber * _elevationInMeters;
}

@property (nonatomic, readonly) NSNumber *buildingFaceAzimuth;
@property (nonatomic, readonly) NSNumber *buildingHeightInMeters;
@property (nonatomic, readonly) NSArray *buildingIds;
@property (nonatomic, readonly) NSNumber *elevationInMeters;

- (void).cxx_destruct;
- (id)buildingFaceAzimuth;
- (id)buildingHeightInMeters;
- (id)buildingIds;
- (id)elevationInMeters;
- (id)initWithBuildingIds:(id)arg1 elevationInMeters:(id)arg2 buildingHeightInMeters:(id)arg3 buildingFaceAzimuth:(id)arg4;
- (id)initWithGEOPDEnhancedPlacement:(id)arg1;

@end
