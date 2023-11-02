
@interface CHUserConfiguration : CHConfiguration

@property (nonatomic, readonly) <CHKeyValueDataSource><CHMutableKeyValueDataSource> *dataSource;

+ (id)registeredDefaults;
+ (id)userDefaults;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)propertyNameForKeyPath:(id)arg1;
- (void)synchronize;

@end
