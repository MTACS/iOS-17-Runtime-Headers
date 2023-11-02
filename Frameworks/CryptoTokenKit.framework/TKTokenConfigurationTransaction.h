
@interface TKTokenConfigurationTransaction : NSObject {
    TKTokenConfigurationConnection * _configurationConnection;
}

- (void).cxx_destruct;
- (void)commit;
- (void)dealloc;
- (id)initWithConfigurationConnection:(id)arg1;

@end
