
@interface AFClockItemStorage : NSObject <AFInvalidating> {
    NSDate * _date;
    <AFClockItemStorageDelegate> * _delegate;
    unsigned long long  _generation;
    long long  _groupingDepth;
    NSString * _identifier;
    NSDictionary * _itemsByID;
    NSDate * _workingDate;
    unsigned long long  _workingGeneration;
    NSMutableDictionary * _workingItemsByID;
}

@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long generation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *itemsByID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginGrouping;
- (id)date;
- (void)deleteAllItems;
- (void)deleteItemsWithIDs:(id)arg1;
- (void)endGroupingWithOptions:(unsigned long long)arg1;
- (unsigned long long)generation;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)insertOrUpdateItems:(id)arg1;
- (void)invalidate;
- (id)itemWithID:(id)arg1;
- (id)itemsByID;
- (void)setDate:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (void)setItemsByID:(id)arg1;

@end
