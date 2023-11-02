
@interface IDSBlastDoorConnectionHelper : NSObject {
    id  _idsBlastDoor;
}

@property (nonatomic, retain) id idsBlastDoor;

+ (id)getBlastDoorSharedConnection;

- (void).cxx_destruct;
- (void)addAllowlistedKey:(id)arg1 toValidatedPayload:(id)arg2 fromOriginalPayload:(id)arg3;
- (void)auditMissingHeaderKeys:(id)arg1 target:(id)arg2;
- (bool)commandEnabledForBlastDoor:(id)arg1 topic:(id)arg2;
- (void)diffuseAPSUserPayload:(id)arg1 topic:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)diffuseClientMessage:(id)arg1 context:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)idsBlastDoor;
- (id)init;
- (bool)removeAllowlistedKey:(id)arg1 fromPayload:(id)arg2;
- (void)setIdsBlastDoor:(id)arg1;
- (void)writeBlastDoorPayloadToDiskIfNecessary:(id)arg1 withContext:(id)arg2;

@end
