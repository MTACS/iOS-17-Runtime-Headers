
@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appsList;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSString *jsonEncodedIntent;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)resolveAppForIntent;
+ (id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)appsList;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)jsonEncodedIntent;
- (bool)requiresResponse;
- (void)setAppsList:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (id)ins_jsonEncodedIntent;
- (id)ins_protobufEncodedIntent;
- (void)ins_resolveAppForIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ins_setJSONEncodedIntent:(id)arg1;
- (void)ins_setProtobufEncodedIntent:(id)arg1;
- (bool)ins_shouldUseExtendedFlowTimeout;

@end
