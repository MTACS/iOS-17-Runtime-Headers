
@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (nonatomic) bool doNotDismissSiri;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *handledIntent;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *handledIntentResponse;
@property (nonatomic, copy) NSString *jsonEncodedHandledIntent;
@property (nonatomic, copy) NSString *jsonEncodedHandledIntentResponse;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)launchAppWithIntent;
+ (id)launchAppWithIntentWithDictionary:(id)arg1 context:(id)arg2;

- (bool)doNotDismissSiri;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handledIntent;
- (id)handledIntentResponse;
- (id)jsonEncodedHandledIntent;
- (id)jsonEncodedHandledIntentResponse;
- (bool)requiresResponse;
- (void)setDoNotDismissSiri:(bool)arg1;
- (void)setHandledIntent:(id)arg1;
- (void)setHandledIntentResponse:(id)arg1;
- (void)setJsonEncodedHandledIntent:(id)arg1;
- (void)setJsonEncodedHandledIntentResponse:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (id)ins_jsonEncodedIntent;
- (id)ins_jsonEncodedIntentResponse;
- (void)ins_launchAppWithConnection:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)ins_protobufEncodedIntent;
- (id)ins_protobufEncodedIntentResponse;
- (void)ins_setJSONEncodedIntent:(id)arg1;
- (void)ins_setProtobufEncodedIntent:(id)arg1;

@end
