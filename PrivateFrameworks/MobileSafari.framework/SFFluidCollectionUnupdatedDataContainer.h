
@interface SFFluidCollectionUnupdatedDataContainer : NSObject <SFFluidCollectionDataContainer, SFFluidCollectionLayoutContainer> {
    <UICoordinateSpace> * _coordinateSpace;
    SFFluidCollectionViewUpdate * _update;
    <SFFluidCollectionDataContainer> * _updatedDataContainer;
}

@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) <SFFluidCollectionDataContainer> *dataContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coordinateSpace;
- (id)dataContainer;
- (id)dataSourceIndexPathForIndexPath:(id)arg1;
- (id)indexPathForDataSourceIndexPath:(id)arg1;
- (id)initWithLayoutContainer:(id)arg1 update:(id)arg2;
- (void)layoutWasInvalidatedWithContext:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;

@end
