
@interface AMSFrozenBagValue : AMSBagValue {
    <AMSBagDataSourceProtocol> * _dataSource;
}

@property (nonatomic, retain) <AMSBagDataSourceProtocol> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
- (void)setDataSource:(id)arg1;

@end
