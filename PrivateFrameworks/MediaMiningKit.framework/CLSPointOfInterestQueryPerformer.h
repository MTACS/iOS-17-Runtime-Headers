
@interface CLSPointOfInterestQueryPerformer : CLSBusinessItemGenericQueryPerformer

+ (id)categories;
+ (double)defaultPrecision;

- (id)cache;
- (bool)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;

@end
