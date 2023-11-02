
@interface _UICommandInternalDiff : NSObject {
    NSMutableDictionary * _inserts;
    NSMutableDictionary * _itemDeletes;
    NSMutableSet * _menuDeletes;
    NSMutableDictionary * _replacements;
}

@property (nonatomic, readonly) NSDictionary *inserts;
@property (nonatomic, readonly) NSDictionary *itemDeletes;
@property (nonatomic, readonly) NSSet *menuDeletes;
@property (nonatomic, readonly) NSDictionary *replacements;

- (void).cxx_destruct;
- (id)_deletesForMenu:(id)arg1;
- (id)_parentInsertsForMenu:(id)arg1;
- (id)_replacementsForMenu:(id)arg1;
- (void)deleteItem:(id)arg1 inMenu:(id)arg2;
- (void)deleteMenu:(id)arg1;
- (void)insertAtStartElements:(id)arg1 atEndElements:(id)arg2 inMenu:(id)arg3;
- (void)insertBeforeElements:(id)arg1 afterElements:(id)arg2 aroundElement:(id)arg3 inMenu:(id)arg4;
- (void)insertFallbackBeforeElements:(id)arg1 fallbackAfterElements:(id)arg2 inMenu:(id)arg3;
- (id)inserts;
- (id)itemDeletes;
- (id)menuDeletes;
- (void)replaceItem:(id)arg1 inMenu:(id)arg2 withElements:(id)arg3;
- (id)replacements;

@end
