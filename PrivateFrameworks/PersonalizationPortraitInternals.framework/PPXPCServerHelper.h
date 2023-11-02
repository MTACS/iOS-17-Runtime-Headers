
@interface PPXPCServerHelper : NSObject

+ (bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3;
+ (bool)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2;
+ (bool)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 allowedServerInterface:(id)arg3 allowedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(id /* block */)arg6 setupClientProxy:(id /* block */)arg7 interruptionHandler:(id /* block */)arg8 invalidationHandler:(id /* block */)arg9;

@end
