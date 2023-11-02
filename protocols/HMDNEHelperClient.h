
@protocol HMDNEHelperClient <NSObject>

@required

- (void)cacheClearUUIDs;
- (NSArray *)cacheCopyAppUUIDForSigningIdentifier:(NSString *)arg1 executablePath:(NSString *)arg2;
- (NSString *)cacheCopySigningIdentifierForProcessIdentifier:(NSUUID *)arg1;

@end
