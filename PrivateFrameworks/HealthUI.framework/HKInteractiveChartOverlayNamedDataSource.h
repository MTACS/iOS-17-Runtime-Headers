
@interface HKInteractiveChartOverlayNamedDataSource : NSObject {
    id /* block */  _contextTitleForTimeScope;
    <HKChartCacheDataSource> * _dataSource;
    NSString * _name;
}

@property (nonatomic, copy) id /* block */ contextTitleForTimeScope;
@property (nonatomic, retain) <HKChartCacheDataSource> *dataSource;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id /* block */)contextTitleForTimeScope;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 named:(id)arg2 withContextTitleForTimeScope:(id /* block */)arg3;
- (id)name;
- (void)setContextTitleForTimeScope:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setName:(id)arg1;

@end
