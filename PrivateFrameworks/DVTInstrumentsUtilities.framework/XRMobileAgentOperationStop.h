
@interface XRMobileAgentOperationStop : NSObject <XRMobileAgentStop>

@property (nonatomic, readonly) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)receiveMobileAgent:(id)arg1;

@end
