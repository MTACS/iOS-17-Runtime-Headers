
@interface FBServiceFacilityServerClientHandle : NSObject <BSInvalidatable, FBSServiceFacilityClientHandle_Internal> {
    BSServiceConnection * _connection;
    <FBSServiceFacilityClientContext> * _context;
    NSString * _facilityID;
    FBProcess * _process;
    BSProcessHandle * _processHandle;
}

@property (nonatomic, readonly) <BSXPCServiceConnectionMessaging> *clientHandle_messageBuilder;
@property (nonatomic, retain) <FBSServiceFacilityClientContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *facilityID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (nonatomic, readonly, copy) RBSProcessIdentity *processIdentity;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (void).cxx_destruct;
- (id)clientHandle_messageBuilder;
- (id)context;
- (id)description;
- (id)facilityID;
- (id)initWithFacilityID:(id)arg1 connection:(id)arg2;
- (void)invalidate;
- (bool)isSuspended;
- (int)pid;
- (id)prettyProcessDescription;
- (id)processHandle;
- (id)processIdentity;
- (void)setContext:(id)arg1;

@end
