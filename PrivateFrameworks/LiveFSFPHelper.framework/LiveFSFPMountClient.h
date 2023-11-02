
@interface LiveFSFPMountClient : LiveFSMountClient

+ (id)locallyBuildFPDomain:(id)arg1 displayName:(id)arg2 provider:(id)arg3 how:(int)arg4;
+ (id)locallyBuiltDomainStorageSuffix;
+ (id)locallyDestroyFPDomain:(id)arg1 provider:(id)arg2;
+ (id)newClientForProvider:(id)arg1;

- (id)fixupConnectionFor:(id)arg1;

@end
