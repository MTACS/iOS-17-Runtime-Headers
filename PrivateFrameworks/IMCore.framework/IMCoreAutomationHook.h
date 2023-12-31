
@interface IMCoreAutomationHook : NSObject {
    IMAccount * _imessageAccount;
}

@property (readonly) IMAccount *bestiMessageAccount;

+ (id)stringFromAutomationErrorCode:(long long)arg1;

- (void).cxx_destruct;
- (id)bestiMessageAccount;
- (id)chatForHandles:(id)arg1 error:(id*)arg2 results:(id)arg3;
- (id)existingChatForGroupID:(id)arg1 error:(id*)arg2 results:(id)arg3;
- (id)handlesFromStrings:(id)arg1 error:(id*)arg2 results:(id)arg3;

@end
