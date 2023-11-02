
@interface PGDeduper : NSObject {
    NSSet * _identifiersOfRequiredItems;
}

@property (nonatomic, copy) NSSet *identifiersOfRequiredItems;

- (void).cxx_destruct;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)identifiersOfRequiredItems;
- (bool)itemIsRequired:(id)arg1;
- (id)requiredItemsInItems:(id)arg1;
- (void)setIdentifiersOfRequiredItems:(id)arg1;

@end
