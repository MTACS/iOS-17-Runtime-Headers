
@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (nonatomic) bool allowsPunchOut;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSArray *intentSlotKeyPaths;
@property (nonatomic, copy) NSString *jsonEncodedIntent;
@property (nonatomic) bool shouldRunHandleIntent;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)processIntent;
+ (id)processIntentWithDictionary:(id)arg1 context:(id)arg2;

- (bool)allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)intentSlotKeyPaths;
- (id)jsonEncodedIntent;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAllowsPunchOut:(bool)arg1;
- (void)setIntent:(id)arg1;
- (void)setIntentSlotKeyPaths:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;
- (void)setShouldRunHandleIntent:(bool)arg1;
- (bool)shouldRunHandleIntent;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (void)_confirmIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_resolveIntentSlotsWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)ins_setJSONEncodedIntent:(id)arg1;
- (void)ins_setProtobufEncodedIntent:(id)arg1;
- (bool)ins_shouldUseExtendedFlowTimeout;

@end
