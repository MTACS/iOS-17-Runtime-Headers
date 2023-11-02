
@interface RTCReportingAVCLegacySupport : NSObject {
    id  _awdAdaptor;
    NSObject<OS_dispatch_queue> * _dispatchQ;
    NSObject<OS_os_log> * _logger;
}

@property (nonatomic, readonly) id awdAdaptor;

- (id)awdAdaptor;
- (void)dealloc;
- (id)init;
- (void)invokeAWDAdaptorForPayload:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3;
- (void)sendPowerLogEventForClient:(id)arg1 serviceName:(id)arg2 payload:(id)arg3 category:(unsigned short)arg4 type:(unsigned short)arg5 eventNumber:(unsigned long long)arg6;

@end
