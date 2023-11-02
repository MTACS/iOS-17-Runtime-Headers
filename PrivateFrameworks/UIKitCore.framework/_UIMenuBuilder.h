
@interface _UIMenuBuilder : NSObject <NSCopying, UIMenuBuilder> {
    unsigned long long  __actualChangeCount;
    unsigned long long  __changeCount;
    struct { 
        NSMutableSet *keyCommands; 
        NSMutableDictionary *menus; 
        NSMutableDictionary *actions; 
        _UICommandIdentifierDictionary *commands; 
        NSMutableDictionary *parentMenuIdentifiers; 
        _UICommandIdentifierDictionary *commandParentMenuIdentifiers; 
    }  _analysis;
    NSArray * _keyCommandsCache;
    UIMenuSystem * _system;
}

@property (nonatomic, readonly) unsigned long long _actualChangeCount;
@property (nonatomic, readonly) unsigned long long _changeCount;
@property (nonatomic, readonly) NSArray *_keyCommands;
@property (nonatomic) UIMenuSystem *system;

- (void).cxx_destruct;
- (unsigned long long)_actualChangeCount;
- (unsigned long long)_changeCount;
- (id)_firstValidMenuWithinIdentifiers:(id)arg1;
- (void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(id /* block */)arg3;
- (id)_internalDiffForDiffv1:(id)arg1;
- (bool)_isInternallyConsistent;
- (id)_keyCommands;
- (id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2;
- (void)_patch:(id)arg1;
- (void)_patchInternalDiff:(id)arg1;
- (void)_recacheCommandsIfNeeded;
- (void)_replaceMenu:(id)arg1 withMenu:(id)arg2;
- (void)_setNeedsRecacheCommands;
- (id)actionForIdentifier:(id)arg1;
- (id)commandForAction:(SEL)arg1 propertyList:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRootMenu:(id)arg1;
- (id)initWithSystem:(id)arg1 analysis:(struct { id x1; id x2; id x3; id x4; id x5; id x6; })arg2;
- (void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;
- (void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;
- (void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;
- (void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;
- (id)menuForIdentifier:(id)arg1;
- (void)removeMenuForIdentifier:(id)arg1;
- (void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(id /* block */)arg2;
- (void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;
- (void)setSystem:(id)arg1;
- (id)system;

@end
