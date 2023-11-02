
@interface DTObjectAllocService : DTXService <DTObjectAllocServiceAuthorizedAPI, DTObjectAllocServiceLegacyAPI> {
    DTAllocationsRecorder * _recorder;
    unsigned int  _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (id)attachToPid:(id)arg1 eventsMask:(id)arg2;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (id)preparedEnvironmentForLaunch:(id)arg1 eventsMask:(id)arg2;
- (void)startCollectionWithPid:(int)arg1;
- (void)stopCollection;

@end
