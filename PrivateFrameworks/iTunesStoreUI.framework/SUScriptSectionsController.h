
@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections;
@property (retain) SUScriptSection *selectedSection;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copySectionWithIdentifier:(id)arg1;
- (id)_fixedSelectedIdentifier;
- (void)_setSelectedIdentifier:(id)arg1;
- (void)_tabBarConfigurationChangedNotification:(id)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)scriptAttributeKeys;
- (id)sectionWithIdentifier:(id)arg1;
- (id)sections;
- (id)selectedSection;
- (void)setRootViewController:(id)arg1 forSection:(id)arg2;
- (void)setSelectedSection:(id)arg1;

@end
