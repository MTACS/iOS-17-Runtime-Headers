
@interface DTLeaksService : DTXService <DTLeaksServiceAuthorizedRPC, DTLeaksServiceLegacyRPC> {
    NSObject<OS_dispatch_queue> * _coordinationQueue;
    NSMutableDictionary * _fileByPid;
    NSMutableDictionary * _helperConnectionByTargetPid;
    NSMutableDictionary * _helperPidByTargetPid;
    NSObject<OS_dispatch_queue> * _preservationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (void)_internalRequestForPid:(int)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (void)_lookupGraphByToken:(unsigned long long)arg1 response:(id)arg2;
- (id)_preserveDict:(id)arg1 forPid:(int)arg2;
- (void)cancelAllRequests;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)requestGraph:(unsigned long long)arg1 options:(id)arg2;
- (id)requestMallocStackLog:(int)arg1 forAddress:(unsigned long long*)arg2 size:(unsigned long long)arg3 isLiteZone:(unsigned int)arg4;
- (id)requestVMregionStackLog:(int)arg1 forAddress:(unsigned long long*)arg2 size:(unsigned long long)arg3;
- (int)setMallocStackLoggingMode:(int)arg1 forPid:(int)arg2;

@end
