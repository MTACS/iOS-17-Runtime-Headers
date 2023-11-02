
@protocol MCMResultWithContainer <MCMResult>

@required

- (id)initWithContainerPath:(MCMContainerPath *)arg1 containerIdentity:(MCMContainerIdentity *)arg2 uuid:(NSUUID *)arg3 sandboxToken:(const char *)arg4 includePath:(bool)arg5;
- (id)initWithMetadata:(id <MCMMetadataMinimal>)arg1 sandboxToken:(const char *)arg2 includePath:(bool)arg3 includeInfo:(bool)arg4 includeUserManagedAssetsRelPath:(bool)arg5;
- (id)initWithUUID:(NSUUID *)arg1 containerPathIdentifier:(NSString *)arg2 identifier:(NSString *)arg3 containerClass:(unsigned long long)arg4 POSIXUser:(MCMPOSIXUser *)arg5 personaUniqueString:(NSString *)arg6 sandboxToken:(const char *)arg7 existed:(bool)arg8 url:(NSURL *)arg9 info:(NSDictionary *)arg10 transient:(bool)arg11 userManagedAssetsRelPath:(NSString *)arg12;

@end
