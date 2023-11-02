
@interface SAUIVisualResponseShowNextSnippet : SABaseClientBoundCommand

@property (nonatomic, retain) SAUIVisualResponseSnippet *visualResponse;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setVisualResponse:(id)arg1;
- (id)visualResponse;

@end
