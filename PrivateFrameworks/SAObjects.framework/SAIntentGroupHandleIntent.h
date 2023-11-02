
@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand <WFIntentGroupRemoteOperation>

@property (nonatomic) bool allowsPunchOut;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSString *jsonEncodedIntent;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)handleIntent;
+ (id)handleIntentWithDictionary:(id)arg1 context:(id)arg2;

- (bool)allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)jsonEncodedIntent;
- (bool)requiresResponse;
- (void)setAllowsPunchOut:(bool)arg1;
- (void)setIntent:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)ins_setJSONEncodedIntent:(id)arg1;
- (void)ins_setProtobufEncodedIntent:(id)arg1;
- (bool)ins_shouldUseExtendedFlowTimeout;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_setIntent:(id)arg1;

@end
