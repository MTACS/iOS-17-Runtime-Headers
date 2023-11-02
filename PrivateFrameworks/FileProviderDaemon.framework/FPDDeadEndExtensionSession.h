
@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol> {
    bool  hasFileProviderAttributionMDMAccess;
    bool  hasFileProviderPresenceTCCAccess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasFileProviderAttributionMDMAccess;
@property (nonatomic) bool hasFileProviderPresenceTCCAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)cancelAsync;
- (void)dumpStateTo:(id)arg1;
- (id)existingFileProviderProxyWithTimeout:(double)arg1 onlyAlreadyLifetimeExtended:(bool)arg2 pid:(int)arg3;
- (bool)hasFileProviderAttributionMDMAccess;
- (bool)hasFileProviderPresenceTCCAccess;
- (void)invalidate;
- (id)newFileProviderProxyWithTimeout:(double)arg1 pid:(int)arg2;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (void)setHasFileProviderPresenceTCCAccess:(bool)arg1;
- (void)start;
- (void)terminateWithReason:(id)arg1;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x1[8]; })arg1;

@end
