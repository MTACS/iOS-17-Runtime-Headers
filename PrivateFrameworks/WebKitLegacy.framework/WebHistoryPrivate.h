
@interface WebHistoryPrivate : NSObject {
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> { 
        struct __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>> *, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> { 
            void *__value_; 
        } __ptr_; 
    }  _entriesByDate;
    struct RetainPtr<NSMutableDictionary> { 
        void *m_ptr; 
    }  _entriesByURL;
    struct RetainPtr<NSMutableArray> { 
        void *m_ptr; 
    }  _orderedLastVisitedDays;
    int  ageInDaysLimit;
    bool  ageInDaysLimitSet;
    int  itemLimit;
    bool  itemLimitSet;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addItem:(id)arg1 discardDuplicate:(bool)arg2;
- (void)addItemToDateCaches:(id)arg1;
- (void)addItems:(id)arg1;
- (void)addVisitedLinksToVisitedLinkStore:(void*)arg1;
- (id)ageLimitDate;
- (id)allItems;
- (bool)containsURL:(id)arg1;
- (id)data;
- (bool)findKey:(long long*)arg1 forDay:(double)arg2;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (id)init;
- (void)insertItem:(id)arg1 forDateKey:(long long)arg2;
- (id)itemForURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (bool)loadFromURL:(id)arg1 collectDiscardedItemsInto:(id)arg2 error:(id*)arg3;
- (bool)loadHistoryGutsFromURL:(id)arg1 savedItemsCount:(int*)arg2 collectDiscardedItemsInto:(id)arg3 error:(id*)arg4;
- (id)orderedItemsLastVisitedOnDay:(id)arg1;
- (id)orderedLastVisitedDays;
- (void)rebuildHistoryByDayIfNeeded:(id)arg1;
- (bool)removeAllItems;
- (bool)removeItem:(id)arg1;
- (bool)removeItemForURLString:(id)arg1;
- (bool)removeItemFromDateCaches:(id)arg1;
- (bool)removeItems:(id)arg1;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (void)setHistoryAgeInDaysLimit:(int)arg1;
- (void)setHistoryItemLimit:(int)arg1;
- (id)visitedURL:(id)arg1 withTitle:(id)arg2;

@end
