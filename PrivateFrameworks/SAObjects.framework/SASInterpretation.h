
@interface SASInterpretation : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doNotDedup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tokens;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)interpretation;
+ (id)interpretationWithDictionary:(id)arg1 context:(id)arg2;

- (bool)doNotDedup;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDoNotDedup:(bool)arg1;
- (void)setTokens:(id)arg1;
- (id)tokens;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_speechTokens;

@end