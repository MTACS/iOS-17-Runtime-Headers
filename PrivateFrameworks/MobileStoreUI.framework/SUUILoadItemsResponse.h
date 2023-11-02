
@interface SUUILoadItemsResponse : NSObject {
    NSSet * _invalidItemIdentifiers;
    NSDictionary * _loadedItems;
}

@property (nonatomic, copy) NSSet *invalidItemIdentifiers;
@property (nonatomic, copy) NSDictionary *loadedItems;

- (void).cxx_destruct;
- (id)invalidItemIdentifiers;
- (id)loadedItems;
- (void)setInvalidItemIdentifiers:(id)arg1;
- (void)setLoadedItems:(id)arg1;

@end
