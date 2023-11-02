
@interface DiagnosticExtensionCaller : NSObject {
    NSMutableArray * _liveDEs;
    DEExtensionManager * _manager;
}

+ (bool)getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(id /* block */)arg5;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_getAttachmentsFrom:(id)arg1 forBundleID:(id)arg2 withParameters:(id)arg3 queue:(id)arg4 reply:(id /* block */)arg5;
- (id)_getDEExtensionWithIdentifier:(id)arg1;
- (id)init;

@end
