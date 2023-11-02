
@interface TKTokenConfigurationConnectionProxy : NSObject <TKTokenConfigurationChangeProtocol> {
    TKTokenConfigurationConnection * _weakConfigurationConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (void)tokenConfigurationChanged:(id)arg1;

@end
