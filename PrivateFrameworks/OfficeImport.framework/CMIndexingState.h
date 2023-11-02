
@interface CMIndexingState : CMState {
    NSMutableDictionary * _metadata;
    CSSearchableItemAttributeSet * _searchableAttributes;
    NSMutableString * _textContent;
}

@property (retain) NSMutableDictionary *metadata;
@property (nonatomic, retain) CSSearchableItemAttributeSet *searchableAttributes;
@property (retain) NSMutableString *textContent;

- (void).cxx_destruct;
- (id)init;
- (id)metadata;
- (id)searchableAttributes;
- (void)setMetadata:(id)arg1;
- (void)setSearchableAttributes:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)textContent;

@end
