
@interface DTInstrumentServer : NSObject <DTInstrumentServerAllowedRPC, DTInstrumentServerSimulatorPrivilege> {
    DTXConnection * _connection;
}

@property (nonatomic, readonly) DTXConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_taskInvalid:(unsigned int)arg1 forPid:(int)arg2;
+ (void)_tfpPortReceived:(unsigned int)arg1;
+ (bool)isAppleInternal;
+ (void)takeOwnershipOfSharedAuthorization:(void*)arg1;
+ (unsigned int)taskForPid:(int)arg1;

- (void).cxx_destruct;
- (id)_blessSimulatorHub:(int)arg1;
- (void)_notifyOfTFPCommunicationsPort:(unsigned int)arg1;
- (void)cancel;
- (id)connection;
- (id)initWithTransport:(id)arg1;
- (void)loadServicesAtPath:(id)arg1;
- (void)resume;
- (void)setMaxConnectionEnqueue:(unsigned long long)arg1;

@end
