
@interface _AAUIDataclassOptionCache : NSObject {
    NSDictionary * _dataclassOptions;
    NSArray * _filteredDataclasses;
}

@property (nonatomic, copy) NSDictionary *dataclassOptions;
@property (nonatomic, copy) NSArray *filteredDataclasses;

- (void).cxx_destruct;
- (id)dataclassOptions;
- (id)filteredDataclasses;
- (id)initWithDataclassOptions:(id)arg1;
- (void)setDataclassOptions:(id)arg1;
- (void)setFilteredDataclasses:(id)arg1;

@end
