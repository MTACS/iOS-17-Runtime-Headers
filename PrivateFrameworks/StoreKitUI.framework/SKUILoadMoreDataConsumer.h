
@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer {
    NSSet * _unavailableItemIdentifiers;
}

@property (nonatomic, copy) NSSet *unavailableItemIdentifiers;

- (void).cxx_destruct;
- (id)_itemsWithDictionary:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (id)unavailableItemIdentifiers;

@end
