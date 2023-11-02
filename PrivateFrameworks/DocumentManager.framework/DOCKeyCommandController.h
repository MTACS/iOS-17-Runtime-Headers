
@interface DOCKeyCommandController : NSObject

+ (id)cancellingKeyCommandsWithAction:(SEL)arg1;
+ (id)dismissingKeyCommandsWithAction:(SEL)arg1;

- (id)_menuDefinition;
- (id)_menuOrder;
- (id)_menuTitleForCustomMenuWithIdentifier:(id)arg1;
- (id)_unwantedMenuIdentifiers;
- (id)allKeyCommands;
- (id)allKeyCommandsWithAction:(SEL)arg1;
- (void)buildWithBuilder:(id)arg1;

@end
