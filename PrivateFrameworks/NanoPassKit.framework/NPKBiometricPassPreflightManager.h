
@interface NPKBiometricPassPreflightManager : NSObject {
    <NPKBiometricPassPreflightManagerDataSource> * _dataSource;
}

@property (nonatomic, readonly) <NPKBiometricPassPreflightManagerDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)preflightStatusForType:(unsigned long long)arg1 pairedDeviceMinOSVersion:(id)arg2 completion:(id /* block */)arg3;

@end
