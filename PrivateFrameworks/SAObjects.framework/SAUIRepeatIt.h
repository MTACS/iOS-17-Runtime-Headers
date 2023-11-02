
@interface SAUIRepeatIt : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *contingency;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)repeatIt;
+ (id)repeatItWithDictionary:(id)arg1 context:(id)arg2;

- (id)contingency;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContingency:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (long long)sruif_usefulUserResultType;

@end
