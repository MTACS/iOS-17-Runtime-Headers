
@interface MLROnDemandPlugin : NSObject

+ (id)_createXPCConnection:(id)arg1 error:(id*)arg2;
+ (id)_locateWithExtensionID:(id)arg1;
+ (void)_performTask:(id)arg1 forPluginID:(id)arg2 isSynchronous:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (id)onDemandPluginIDs;
+ (void)performTask:(id)arg1 forPluginID:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)synchronouslyPerformTask:(id)arg1 forPluginID:(id)arg2 error:(id*)arg3;

@end
