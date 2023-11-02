
@interface CHConfiguration : NSObject <CHConfiguration> {
    <CHKeyValueDataSource> * _dataSource;
    CHDelegateController<CHConfigurationDelegate> * _delegateController;
}

@property (getter=isCloudKitEnabled, nonatomic, readonly) bool cloudKitEnabled;
@property (nonatomic, readonly) <CHKeyValueDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CHDelegateController<CHConfigurationDelegate> *delegateController;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)dataSource;
- (id)delegateController;
- (id)initWithDataSource:(id)arg1;
- (bool)isCloudKitEnabled;
- (id)numberForKey:(id)arg1;
- (void)removeDelegate:(id)arg1;

@end
