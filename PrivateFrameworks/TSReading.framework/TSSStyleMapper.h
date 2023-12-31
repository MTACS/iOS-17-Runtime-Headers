
@interface TSSStyleMapper : NSObject <TSKStyleMapper> {
    TSKAddedToDocumentContext * _dolcContext;
    bool  _forceMatchStyle;
    NSMutableArray * _mappingContext;
    TSURetainedPointerKeyDictionary * _styleMap;
    TSSStylesheet * _targetStylesheet;
    TSSStylesheet * _targetThemeStylesheet;
    bool  _varyInThemeStylesheet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceMatchStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSSStylesheet *targetStylesheet;

- (id)_mappedStyleForStyle:(id)arg1 depth:(unsigned long long)arg2;
- (id)createStyleForStyle:(id)arg1 withPropertyMap:(id)arg2;
- (void)dealloc;
- (bool)forceMatchStyle;
- (id)initWithTargetStylesheet:(id)arg1 newStyleDOLCContext:(id)arg2;
- (id)mappedStyleForStyle:(id)arg1;
- (id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(bool)arg2;
- (id)pCascadedFindExistingRootlessStyle:(id)arg1 propertyMap:(id)arg2;
- (id)pTargetParentForStyle:(id)arg1 withParentIdentifier:(id)arg2;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (void)setForceMatchStyle:(bool)arg1;
- (id)targetStylesheet;
- (void)varyInThemeStylesheetForDurationOfBlock:(id /* block */)arg1;
- (void)varyInThemeStylesheetIf:(bool)arg1 forDurationOfBlock:(id /* block */)arg2;

@end
