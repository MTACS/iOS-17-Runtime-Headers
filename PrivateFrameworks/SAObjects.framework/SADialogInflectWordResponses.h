
@interface SADialogInflectWordResponses : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *inflectWordResponses;

+ (id)inflectWordResponses;
+ (id)inflectWordResponsesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)inflectWordResponses;
- (bool)requiresResponse;
- (void)setInflectWordResponses:(id)arg1;

@end
