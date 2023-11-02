
@interface DUXPCServerHelper : NSObject

+ (bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3;
+ (bool)checkForAndLogTrueCStringEntitlement:(const char *)arg1 connection:(id)arg2;
+ (void)logFalseEntitlement:(id)arg1 serviceName:(id)arg2 processName:(id)arg3;
+ (bool)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 requestHandler:(id)arg4 validateConnection:(id /* block */)arg5 setupClientProxy:(id /* block */)arg6 interruptionHandler:(id /* block */)arg7 invalidationHandler:(id /* block */)arg8;

@end
