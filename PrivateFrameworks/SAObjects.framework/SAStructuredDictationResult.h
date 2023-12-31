
@interface SAStructuredDictationResult : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *items;

+ (id)structuredDictationResult;
+ (id)structuredDictationResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)items;
- (bool)requiresResponse;
- (void)setItems:(id)arg1;

@end
