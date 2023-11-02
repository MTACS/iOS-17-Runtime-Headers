
@interface SAIntentGroupIntentSignal : SABaseClientBoundCommand

@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSString *jsonEncodedIntent;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)intentSignal;
+ (id)intentSignalWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)jsonEncodedIntent;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setIntent:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (void)ins_setJSONEncodedIntent:(id)arg1;
- (void)ins_setProtobufEncodedIntent:(id)arg1;
- (bool)ins_shouldUseExtendedFlowTimeout;

@end
