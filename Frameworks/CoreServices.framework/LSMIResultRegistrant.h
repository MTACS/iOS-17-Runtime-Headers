
@interface LSMIResultRegistrant : NSObject {
    NSDictionary * _miDict;
    NSSet * _personas;
    <LSMIResultRegistrantStrategy> * _strategy;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (void)_replyWithError:(id)arg1 onQueue:(id)arg2 block:(id /* block */)arg3;
- (id)initWithContext:(id)arg1 operationUUID:(id)arg2 itemInfoDict:(id)arg3 personas:(id)arg4;
- (void)runPostProcessingForBundleID:(id)arg1 success:(bool)arg2 isSystemApp:(bool)arg3 isPlaceholder:(bool)arg4 registeredBothFullAppAndPlaceholder:(bool)arg5 notificationJournaller:(id)arg6;
- (void)runWithCompletion:(id /* block */)arg1;

@end
