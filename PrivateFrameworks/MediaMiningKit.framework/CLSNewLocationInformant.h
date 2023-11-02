
@interface CLSNewLocationInformant : CLSInformant

+ (id)_categoriesDescriptionFromCategories:(id)arg1;
+ (id)areaOfInterestCategories;
+ (id)businessItemsForRegion:(id)arg1;
+ (id)classIdentifier;
+ (id)createPlaceForBusinessItem:(id)arg1;
+ (bool)doesRegion:(id)arg1 containLocation:(id)arg2;
+ (bool)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2;
+ (id)familyIdentifier;
+ (id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blocklistCategories:(id)arg4;
+ (id)informantDependenciesIdentifiers;
+ (bool)location:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 isCloseToLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
+ (bool)location:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 isFarFromLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
+ (id)natureCategories;
+ (id)pointOfInterestCategories;
+ (id)regionOfInterestCategories;
+ (id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 forCategories:(id)arg2 precision:(double)arg3 inCache:(id)arg4;
+ (struct CLLocationCoordinate2D { double x1; double x2; })shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)shiftedLocationFromOriginalLocation:(id)arg1;

- (id)_pointOfInterestTraits;
- (id)_regionOfInterestCategories;
- (id)_regionOfInterestTraits;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)locationAreaOfInterestCluesForInputClue:(id)arg1;
- (id)locationPointOfInterestCluesForInputClue:(id)arg1;
- (id)locationRegionOfInterestCluesForInputClue:(id)arg1;
- (id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(bool)arg6 precision:(double)arg7 cache:(id)arg8;

@end
