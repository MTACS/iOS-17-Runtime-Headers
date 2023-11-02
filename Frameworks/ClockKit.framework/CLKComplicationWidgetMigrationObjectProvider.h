
@interface CLKComplicationWidgetMigrationObjectProvider : NSObject {
    NSMutableDictionary * _itemsByAppIdentifier;
}

- (void).cxx_destruct;
- (void)enumerateAppIdentifiersWithBlock:(id /* block */)arg1;
- (void)enumerateItemsForAppIdentifier:(id)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (id)itemForAppIdentifier:(id)arg1 key:(id)arg2;
- (void)removeItemsForAppIdentifier:(id)arg1;
- (void)setItem:(id)arg1 forAppIdentifier:(id)arg2 key:(id)arg3;

@end
