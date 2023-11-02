
@interface SAUICloseAssistant : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *reason;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)closeAssistant;
+ (id)closeAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reason;
- (bool)requiresResponse;
- (void)setReason:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (long long)sruif_usefulUserResultType;

@end
