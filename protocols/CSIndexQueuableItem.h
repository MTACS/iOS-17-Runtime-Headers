
@protocol CSIndexQueuableItem

@required

- (CSSearchableItem *)searchableItem;
- (void)updateWithItem:(id <CSIndexQueuableItem>)arg1;

@end
