
@interface SAIntentGroupHandleIntentCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intentResponse;
@property (nonatomic, copy) NSString *jsonEncodedIntentResponse;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)handleIntentCompleted;
+ (id)handleIntentCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentResponse;
- (id)jsonEncodedIntentResponse;
- (bool)requiresResponse;
- (void)setIntentResponse:(id)arg1;
- (void)setJsonEncodedIntentResponse:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (id)ins_jsonEncodedIntentResponse;
- (id)ins_protobufEncodedIntentResponse;

@end
