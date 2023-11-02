
@interface SXDOMAnalysis : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _componentStyleToComponentsMap;
    NSMutableDictionary * _componentTextStyleToComponentsMap;
    NSMutableDictionary * _componentToChildComponentsMap;
    NSMutableDictionary * _componentToComponentStylesMap;
    NSMutableDictionary * _componentToComponentTextStylesMap;
    NSMutableDictionary * _componentToParentComponentMap;
    NSMutableDictionary * _componentToRoleMap;
    NSMutableDictionary * _componentToTextStylesMap;
    NSMutableDictionary * _componentToTypeMap;
    SXMutableConditionalObjectAnalysis * _conditionalObjectAnalysis;
    SXMutableNamespacedObjectReferences * _namespacedObjectReferences;
    NSMutableDictionary * _roleToComponentsMap;
    NSMutableDictionary * _textStyleToComponentsMap;
    NSMutableDictionary * _typeToComponentsMap;
}

@property (nonatomic, readonly, copy) SXConditionalObjectAnalysis *conditionalObjectAnalysis;
@property (nonatomic, readonly, copy) SXNamespacedObjectReferences *namespacedObjectReferences;

- (void).cxx_destruct;
- (id)childComponentsOfComponent:(id)arg1 includeDescendants:(bool)arg2;
- (id)componentStylesForComponent:(id)arg1;
- (id)componentStylesForComponents:(id)arg1;
- (id)componentTextStylesForComponent:(id)arg1;
- (id)componentTextStylesForComponents:(id)arg1;
- (id)componentsForComponentStyle:(id)arg1;
- (id)componentsForComponentStyles:(id)arg1;
- (id)componentsForComponentTextStyle:(id)arg1;
- (id)componentsForComponentTextStyles:(id)arg1;
- (id)componentsForTextStyle:(id)arg1;
- (id)componentsForTextStyles:(id)arg1;
- (id)componentsWithRole:(int)arg1;
- (id)componentsWithType:(id)arg1;
- (id)conditionalObjectAnalysis;
- (id)containerPathForComponentWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifiersForKey:(id)arg1 map:(id)arg2;
- (id)identifiersForKeys:(id)arg1 map:(id)arg2;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)namespacedObjectReferences;
- (id)parentComponentOfComponent:(id)arg1;
- (void)populateWithSource:(id)arg1;
- (int)roleForComponent:(id)arg1;
- (id)textStylesForComponent:(id)arg1;
- (id)textStylesForComponents:(id)arg1;
- (id)typeForComponent:(id)arg1;

@end
