
@interface SXNamespacedObjectReferences : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _componentStyleReferences;
    NSMutableDictionary * _componentTextStyleReferences;
    NSMutableDictionary * _textStyleReferences;
}

- (void).cxx_destruct;
- (id)componentStyleIdentifierForNamespacedComponentStyleIdentifier:(id)arg1 component:(id)arg2;
- (id)componentTextStyleIdentifierForNamespacedComponentTextStyleIdentifier:(id)arg1 component:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)namespacedComponentStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2;
- (id)namespacedComponentStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2;
- (id)namespacedComponentTextStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2;
- (id)namespacedComponentTextStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2;
- (id)namespacedTextStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2;
- (id)namespacedTextStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2;
- (void)populateWithSource:(id)arg1;
- (id)referencesForComponent:(id)arg1 map:(id)arg2;
- (id)textStyleIdentifierForNamespacedTextStyleIdentifier:(id)arg1 component:(id)arg2;

@end
