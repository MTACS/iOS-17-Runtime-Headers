
@protocol RBLaunchdInterfacing <NSObject>

@required

- (<OSLaunchdJobProtocol> *)copyJobWithLabel:(NSString *)arg1 domain:(OSLaunchdDomain *)arg2;
- (<OSLaunchdJobProtocol> *)copyJobWithPid:(int)arg1;
- (NSArray *)copyJobsManagedBy:(NSString *)arg1 error:(out id*)arg2;
- (OSLaunchdDomain *)currentDomain;
- (OSLaunchdDomain *)domainForPid:(int)arg1;
- (OSLaunchdDomain *)domainForUser:(unsigned int)arg1;
- (<OSLaunchdJobProtocol> *)forJob:(id <OSLaunchdJobProtocol>)arg1 createInstance:(unsigned char)arg2 properties:(id <OSLaunchdJobInstancePropertiesProtocol>)arg3 error:(out id*)arg4;
- (<OSLaunchdJobInstancePropertiesProtocol> *)instancePropertiesFromOverlay:(NSDictionary *)arg1;
- (<OSLaunchdJobProtocol> *)jobWithPlist:(NSObject<OS_xpc_object> *)arg1;
- (<OSLaunchdJobProtocol> *)jobWithPlist:(NSObject<OS_xpc_object> *)arg1 domain:(OSLaunchdDomain *)arg2;
- (LASSProperties4RB *)propertiesForJob:(id <OSLaunchdJobProtocol>)arg1 error:(out id*)arg2;
- (LASSProperties4RB *)propertiesForPid:(int)arg1 error:(out id*)arg2;
- (<OSLaunchdJobProtocol> *)submitExtension:(NSString *)arg1 overlay:(NSObject<OS_xpc_object> *)arg2 domain:(OSLaunchdDomain *)arg3 error:(out id*)arg4;

@end
