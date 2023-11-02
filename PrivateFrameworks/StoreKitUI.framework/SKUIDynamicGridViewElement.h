
@interface SKUIDynamicGridViewElement : SKUIGridViewElement {
    bool  _hasValidTemplateDefinitionMap;
    long long  _minimumEntityCountForSections;
    NSMutableDictionary * _templateDefinitionTypeToModeValueMap;
}

@property (nonatomic, readonly) bool hasSectionHeaders;
@property (getter=isMalformed, nonatomic, readonly) bool malformed;
@property (nonatomic, readonly) long long minimumEntityCountForSections;

- (void).cxx_destruct;
- (id)_templateDefinitionTypeToModeValueMap;
- (void)_unfilteredEnumerateChildrenUsingBlock:(id /* block */)arg1;
- (bool)allowsMultipleSelectionDuringEditing;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;
- (bool)hasSectionHeaders;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isDynamicContainer;
- (bool)isMalformed;
- (long long)minimumEntityCountForSections;
- (long long)pageComponentType;
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;

@end