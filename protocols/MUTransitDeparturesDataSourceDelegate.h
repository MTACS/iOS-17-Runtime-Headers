
@protocol MUTransitDeparturesDataSourceDelegate <NSObject>

@required

- (GEOMapServiceTraits *)traitsForDeparturesDataSource:(MUTransitDeparturesDataSource *)arg1;
- (void)transitDeparturesDataSourceWantsReload:(MUTransitDeparturesDataSource *)arg1;

@end
