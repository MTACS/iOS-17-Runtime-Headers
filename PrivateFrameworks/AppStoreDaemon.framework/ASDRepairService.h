
@interface ASDRepairService : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultService;
+ (id)interface;

- (void).cxx_destruct;
- (bool)isCoastGuardUnrepairableAppWithItemID:(unsigned long long)arg1 externalVersionID:(unsigned long long)arg2;
- (void)refreshKeybagWithReplyHandler:(id /* block */)arg1;
- (void)repairAppWithOptions:(id)arg1 replyHandler:(id /* block */)arg2;

@end
