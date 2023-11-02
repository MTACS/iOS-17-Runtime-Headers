
@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding> {
    GEOBuildingFootprintFeature * _buildingFeature;
    NSArray * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBuildingFeature:(id)arg1;
- (id)sections;

@end
