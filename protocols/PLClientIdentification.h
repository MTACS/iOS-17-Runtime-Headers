
@protocol PLClientIdentification <NSObject>

@required

- (struct { unsigned int x1[8]; })clientAuditToken;
- (int)clientProcessIdentifier;
- (NSString *)trustedCallerBundleID;

@end
