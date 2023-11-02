
@interface MUISearchSuggestionResult : NSObject {
    EMMessageObjectID * _objectID;
    CSSearchableItem * _searchableItem;
}

@property (nonatomic, copy) EMMessageObjectID *objectID;
@property (nonatomic, copy) CSSearchableItem *searchableItem;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSearchableItem:(id)arg1 objectID:(id)arg2;
- (id)objectID;
- (id)searchableItem;
- (void)setObjectID:(id)arg1;
- (void)setSearchableItem:(id)arg1;

@end
