
@interface FPUnionCollection : FPItemCollection {
    NSArray * _collections;
}

@property (nonatomic, retain) NSArray *collections;

- (void).cxx_destruct;
- (id)collections;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)description;
- (id)initWithCollections:(id)arg1;
- (void)setCollections:(id)arg1;

@end
