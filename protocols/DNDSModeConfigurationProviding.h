
@protocol DNDSModeConfigurationProviding <NSObject>

@required

- (unsigned long long)exceptionForApplicationIdentifier:(DNDApplicationIdentifier *)arg1 thread:(NSString *)arg2 forModeIdentifier:(NSString *)arg3;
- (unsigned long long)exceptionForContactHandle:(DNDContactHandle *)arg1 forModeIdentifier:(NSString *)arg2;
- (DNDModeConfiguration *)modeConfigurationForModeIdentifier:(NSString *)arg1 withError:(id*)arg2;
- (NSDictionary *)modeConfigurationsWithError:(id*)arg1;

@end
