
@protocol GEOVenueComponentIdentifier <NSObject>

@required

- (bool)_hasBuildingID;
- (bool)_hasFixtureID;
- (bool)_hasUnitID;
- (unsigned long long)buildingID;
- (unsigned long long)fixtureID;
- (<GEOVenueFloorInfo> *)floorInfo;
- (NSArray *)sectionIDs;
- (unsigned long long)unitID;

@end
