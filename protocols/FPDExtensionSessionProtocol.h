
@protocol FPDExtensionSessionProtocol <NSObject>

@required

- (void)asyncUnregisterLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)cancelAsync;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1;
- (<FPXPCAutomaticErrorProxy><FPXVendor> *)existingFileProviderProxyWithTimeout:(double)arg1 onlyAlreadyLifetimeExtended:(bool)arg2 pid:(int)arg3;
- (bool)hasFileProviderAttributionMDMAccess;
- (bool)hasFileProviderPresenceTCCAccess;
- (void)invalidate;
- (<FPXPCAutomaticErrorProxy><FPXVendor> *)newFileProviderProxyWithTimeout:(double)arg1 pid:(int)arg2;
- (void)registerLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)setHasFileProviderPresenceTCCAccess:(bool)arg1;
- (void)start;
- (void)terminateWithReason:(NSString *)arg1;
- (void)unregisterLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x1[8]; })arg1;

@end
