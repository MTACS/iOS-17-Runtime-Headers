
@interface MUTransitDeparturesDataSource : NSObject <MKTransitDeparturesDataProviderDelegate> {
    void dataProvider;
    void delegate;
    void isActive;
    void mapItem;
}

@property (nonatomic) <MUTransitDeparturesDataSourceDelegate> *delegate;
@property (nonatomic) bool isActive;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithMapItem:(id)arg1;
- (bool)isActive;
- (void)setDelegate:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (id)traitsForTransitDeparturesDataProvider:(id)arg1;
- (void)transitDeparturesDataProviderDidReload:(id)arg1;

@end
