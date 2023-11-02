
@interface SAUISetUpdateMask : SABaseClientBoundCommand

@property (nonatomic) bool shouldHideSiri;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setShouldHideSiri:(bool)arg1;
- (bool)shouldHideSiri;

@end
