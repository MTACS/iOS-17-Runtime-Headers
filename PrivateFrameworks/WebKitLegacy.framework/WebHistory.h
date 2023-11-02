
@interface WebHistory : NSObject {
    WebHistoryPrivate * _historyPrivate;
}

@property (nonatomic) int historyAgeInDaysLimit;
@property (nonatomic) int historyItemLimit;
@property (nonatomic, readonly, copy) NSArray *orderedLastVisitedDays;

+ (void)_removeAllVisitedLinks;
+ (void)_setVisitedLinkTrackingEnabled:(bool)arg1;
+ (id)optionalSharedHistory;
+ (void)setOptionalSharedHistory:(id)arg1;

- (void)_addVisitedLinksToVisitedLinkStore:(void*)arg1;
- (id)_data;
- (id)_itemForURLString:(id)arg1;
- (void)_sendNotification:(id)arg1 entries:(id)arg2;
- (void)_visitedURL:(id)arg1 withTitle:(id)arg2 method:(id)arg3 wasFailure:(bool)arg4;
- (void)addItems:(id)arg1;
- (id)allItems;
- (bool)containsURL:(id)arg1;
- (void)dealloc;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (id)init;
- (id)itemForURL:(id)arg1;
- (bool)loadFromURL:(id)arg1 error:(id*)arg2;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)orderedLastVisitedDays;
- (void)removeAllItems;
- (void)removeItems:(id)arg1;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (void)setHistoryItemLimit:(int)arg1;
- (void)timeZoneChanged:(id)arg1;

@end
