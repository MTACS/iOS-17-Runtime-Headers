
@interface SAUIPaginateList : SABaseClientBoundCommand

@property (nonatomic) bool forward;

- (id)encodedClassName;
- (bool)forward;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setForward:(bool)arg1;

@end
