
@interface HFDemoModeFaceRecognitionItemProvider : HFItemProvider {
    HFDemoModeFaceRecognitionDataSource * _dataSource;
    HMHome * _home;
    long long  _mode;
    NSMutableSet * _personItems;
}

@property (nonatomic, retain) HFDemoModeFaceRecognitionDataSource *dataSource;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NSMutableSet *personItems;

- (void).cxx_destruct;
- (id)dataSource;
- (id)home;
- (id)init;
- (id)initForMode:(long long)arg1 home:(id)arg2;
- (id)items;
- (long long)mode;
- (id)personItems;
- (id)reloadItems;
- (void)setDataSource:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setPersonItems:(id)arg1;

@end
