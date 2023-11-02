
@interface VUILibraryShelvesDataSource : VUILibraryDataSource {
    NSDictionary * _dataSourcesByShelfType;
    NSSet * _shelfTypes;
    <VUIShelvesDataSourceDelegate> * _shelvesDelegate;
}

@property (nonatomic, retain) NSDictionary *dataSourcesByShelfType;
@property (nonatomic, retain) NSSet *shelfTypes;
@property (nonatomic) <VUIShelvesDataSourceDelegate> *shelvesDelegate;

- (void).cxx_destruct;
- (id)dataSourcesByShelfType;
- (id)initWithValidShelfTypes:(id)arg1;
- (void)setDataSourcesByShelfType:(id)arg1;
- (void)setShelfTypes:(id)arg1;
- (void)setShelvesDelegate:(id)arg1;
- (id)shelfTypes;
- (id)shelvesDelegate;

@end
