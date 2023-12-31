
@interface SAUIHideSiriOverlay : SABaseClientBoundCommand

@property (nonatomic) bool hideSnippets;

+ (id)hideSiriOverlay;
+ (id)hideSiriOverlayWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)hideSnippets;
- (bool)requiresResponse;
- (void)setHideSnippets:(bool)arg1;

@end
