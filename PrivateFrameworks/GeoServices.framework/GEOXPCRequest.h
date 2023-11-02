
@interface GEOXPCRequest : NSObject <GEOXPCSerializable> {
    NSError * _error;
    unsigned char  _flags;
    NSString * _method;
    NSObject<OS_xpc_object> * _object;
    GEOPeer * _peer;
    GEOApplicationAuditToken * _preferredAuditToken;
    NSProgress * _progressToMirrorOverXPC;
    NSString * _service;
    GEODataRequestThrottlerToken * _throttleToken;
    GEOMapServiceTraits * _traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *method;
@property (nonatomic, retain) GEOPeer *peer;
@property (nonatomic, readonly) GEOApplicationAuditToken *preferredAuditToken;
@property (nonatomic, retain) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

+ (bool)reportsProgress;

- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (id)method;
- (id)peer;
- (id)preferredAuditToken;
- (void)send:(id)arg1;
- (void)send:(id)arg1 withReply:(id)arg2 handler:(id /* block */)arg3;
- (id)sendSync:(id)arg1 error:(id*)arg2;
- (id)service;
- (void)setMethod:(id)arg1;
- (void)setPeer:(id)arg1;
- (void)setService:(id)arg1;
- (id)throttleToken;
- (id)traits;

@end
