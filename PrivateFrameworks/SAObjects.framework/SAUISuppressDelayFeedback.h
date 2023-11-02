
@interface SAUISuppressDelayFeedback : SABaseClientBoundCommand

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
