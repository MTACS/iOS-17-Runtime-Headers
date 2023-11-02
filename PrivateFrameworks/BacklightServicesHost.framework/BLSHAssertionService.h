
@interface BLSHAssertionService : NSObject {
    BLSHLocalAssertionService * _localAssertionService;
    BLSHXPCAssertionServiceHostServer * _server;
}

@property (nonatomic, readonly) BLSHLocalAssertionService *localAssertionService;

+ (id)serviceWithOSInterfaceProvider:(id)arg1 localOnly:(bool)arg2;

- (void).cxx_destruct;
- (id)initWithOSInterfaceProvider:(id)arg1 localOnly:(bool)arg2;
- (id)localAssertionService;

@end
