
@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *elementId;

+ (id)activateUIElement;
+ (id)activateUIElementWithDictionary:(id)arg1 context:(id)arg2;

- (id)elementId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setElementId:(id)arg1;

@end
