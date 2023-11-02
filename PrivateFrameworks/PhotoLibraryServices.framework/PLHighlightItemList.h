
@interface PLHighlightItemList : NSObject {
    NSDate * _endDate;
    NSMutableSet * _internalAddedHighlightItems;
    NSMutableOrderedSet * _internalHighlightItems;
    NSMutableSet * _internalRemovedHighlightItems;
    <PLHighlightItem> * _parentHighlightItem;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSSet *addedHighlightItems;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) NSMutableSet *internalAddedHighlightItems;
@property (nonatomic, readonly) NSMutableOrderedSet *internalHighlightItems;
@property (nonatomic, readonly) NSMutableSet *internalRemovedHighlightItems;
@property (nonatomic, readonly) bool isCandidateForReuse;
@property (nonatomic, readonly) bool isNewList;
@property (nonatomic, readonly) <PLHighlightItem> *parentHighlightItem;
@property (nonatomic, readonly, copy) NSSet *removedHighlightItems;
@property (nonatomic, readonly, copy) NSArray *sortedChildHighlightItems;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *uuid;

+ (id)timeSortDescriptors;

- (void).cxx_destruct;
- (void)_updateHighlightItemsOrdering;
- (void)_updateStartEndDates;
- (void)addHighlightItem:(id)arg1;
- (id)addedHighlightItems;
- (id)description;
- (id)endDate;
- (bool)hasChanges;
- (id)initAsNewList;
- (id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2;
- (id)internalAddedHighlightItems;
- (id)internalHighlightItems;
- (id)internalRemovedHighlightItems;
- (bool)isCandidateForReuse;
- (bool)isNewList;
- (void)mergeWithHighlightItemList:(id)arg1;
- (id)parentHighlightItem;
- (void)removeHighlightItem:(id)arg1;
- (id)removedHighlightItems;
- (void)reset;
- (id)sortedChildHighlightItems;
- (id)startDate;
- (id)uuid;

@end
