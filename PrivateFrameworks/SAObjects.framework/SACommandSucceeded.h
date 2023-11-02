
@interface SACommandSucceeded : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)commandSucceeded;
+ (id)commandSucceededWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

+ (id)sruif_commandSucceededWithRefId:(id)arg1;

@end
