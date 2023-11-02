
@interface SABaseCommand : AceObject <SAAceCommand, SAAceSerializable, SiriCoreSessionObject>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=ins_setJSONEncodedIntent:, nonatomic, retain) NSString *ins_jsonEncodedIntent;
@property (setter=ins_setProtobufEncodedIntent:, nonatomic, retain) SAIntentGroupProtobufMessage *ins_protobufEncodedIntent;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)baseCommand;
+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (id)ins_aceIntent;
- (id)ins_aceIntentResponse;
- (id)ins_afAnalyticsContext;
- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (void)ins_invokeErrorCompletionHandler:(id /* block */)arg1 forUnderlyingError:(id)arg2;
- (void)ins_invokeErrorCompletionHandler:(id /* block */)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3;
- (bool)ins_isJSONPayload;
- (id)ins_jsonEncodedIntent;
- (id)ins_jsonEncodedIntentResponse;
- (id)ins_protobufEncodedIntent;
- (id)ins_protobufEncodedIntentResponse;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)ins_setJSONEncodedIntent:(id)arg1;
- (void)ins_setProtobufEncodedIntent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_bufferingAllowedDuringActiveSession;
- (bool)siriCore_isProvisional;
- (bool)siriCore_isRestartable;
- (bool)siriCore_isRetryable;
- (void)siriCore_logDiagnostics;
- (id)siriCore_requestId;
- (id)siriCore_serializedAceDataError:(id*)arg1;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (bool)siriCore_supportedByLocalSession;
- (bool)siriCore_supportedByRemoteLimitedSession;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (long long)sruif_aceCommandType;

@end
