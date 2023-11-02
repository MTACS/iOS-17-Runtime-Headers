
@interface TKTokenDriverConfiguration : NSObject {
    NSString * _classID;
    TKTokenConfigurationConnection * _configurationConnection;
}

@property (nonatomic, readonly) NSString *classID;
@property (nonatomic, readonly, copy) NSDictionary *tokenConfigurations;

+ (id)driverConfigurations;
+ (id)driverConfigurationsWithClient:(id)arg1;

- (void).cxx_destruct;
- (id)addTokenConfigurationForTokenInstanceID:(id)arg1;
- (id)beginTransaction;
- (id)classID;
- (id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(bool)arg2;
- (id)initWithClassID:(id)arg1 configurationConnection:(id)arg2;
- (void)removeTokenConfigurationForTokenInstanceID:(id)arg1;
- (id)tokenConfigurations;

@end
