
@protocol MKTransitDeparturesDataProviderDelegate <NSObject>

@required

- (GEOMapServiceTraits *)traitsForTransitDeparturesDataProvider:(MKTransitDeparturesDataProvider *)arg1;
- (void)transitDeparturesDataProviderDidReload:(MKTransitDeparturesDataProvider *)arg1;

@end
