
@protocol _GCIPCProcess

@required

- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (NSString *)bundleIdentifier;
- (NSArray *)connections;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (int)processIdentifier;

@end
