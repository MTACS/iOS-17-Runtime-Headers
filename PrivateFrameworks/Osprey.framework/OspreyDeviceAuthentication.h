
@interface OspreyDeviceAuthentication : NSObject <OspreyDeviceAuthenticating> {
    OspreyPreferences * _allPreferences;
    OspreyConnectionPreferences * _connectionPreferences;
    unsigned long long  _currentStrategyVersion;
    bool  _hasCurrentStrategyVersion;
    NSDictionary * _strategies;
}

@property (nonatomic) unsigned long long currentStrategyVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentStrategy;
- (unsigned long long)authenticationStrategyVersion;
- (unsigned long long)currentStrategyVersion;
- (id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 allPreferences:(id)arg3;
- (void)setCurrentStrategyVersion:(unsigned long long)arg1;
- (void)signData:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;

@end
