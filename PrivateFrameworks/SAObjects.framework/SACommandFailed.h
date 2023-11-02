
@interface SACommandFailed : SABaseClientBoundCommand <SAClientBoundCommand, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *turnId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)commandFailed;
+ (id)commandFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandFailedWithErrorCode:(long long)arg1;
+ (id)commandFailedWithReason:(id)arg1;

- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)initWithErrorCode:(long long)arg1;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (bool)requiresResponse;
- (void)setErrorCode:(long long)arg1;
- (void)setReason:(id)arg1;
- (void)setTurnId:(id)arg1;
- (id)turnId;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

+ (id)sruif_commandFailedWithRefId:(id)arg1;

@end
