
@interface SLDSyndicationService : NSObject <SLDService, SLDSyndicationServiceProcotol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void)removeMessageGUIDFromSyndication:(id)arg1 reply:(id /* block */)arg2;

@end
