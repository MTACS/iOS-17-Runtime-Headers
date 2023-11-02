
@interface PREditingColorItemsAggregateDataSource : NSObject <PREditingColorItemsDataSource> {
    NSArray * _dataSources;
}

@property (nonatomic, copy) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colorItemForIndex:(unsigned long long)arg1;
- (id)dataSources;
- (id)firstColorItemPassingTest:(id /* block */)arg1;
- (unsigned long long)indexForItem:(id)arg1;
- (id)initWithDataSources:(id)arg1;
- (unsigned long long)numberOfItems;
- (void)setDataSources:(id)arg1;

@end
