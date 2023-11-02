
@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand

@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;
@property (nonatomic, copy) NSString *intentSlotKeyPath;
@property (nonatomic, copy) NSNumber *intentSlotValueIndex;
@property (nonatomic, copy) NSString *jsonEncodedIntent;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)resolveIntentSlot;
+ (id)resolveIntentSlotWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (id)intentSlotKeyPath;
- (id)intentSlotValueIndex;
- (id)jsonEncodedIntent;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setIntent:(id)arg1;
- (void)setIntentSlotKeyPath:(id)arg1;
- (void)setIntentSlotValueIndex:(id)arg1;
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

@end
