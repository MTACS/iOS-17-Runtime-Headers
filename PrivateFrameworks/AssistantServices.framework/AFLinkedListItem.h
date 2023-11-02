
@interface AFLinkedListItem : NSObject {
    AFLinkedListItem * _nextItem;
    id  _object;
    AFLinkedListItem * _previousItem;
}

@property (nonatomic, retain) AFLinkedListItem *nextItem;
@property (nonatomic, readonly) id object;
@property (nonatomic, retain) AFLinkedListItem *previousItem;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (void)insertAfterItem:(id)arg1;
- (void)insertBeforeItem:(id)arg1;
- (id)nextItem;
- (id)object;
- (id)previousItem;
- (void)removeFromList;
- (void)setNextItem:(id)arg1;
- (void)setPreviousItem:(id)arg1;

@end
