
@interface WebBackForwardList : NSObject {
    WebBackForwardListPrivate * _private;
}

@property (nonatomic, readonly) WebHistoryItem *backItem;
@property (nonatomic, readonly) int backListCount;
@property (nonatomic) int capacity;
@property (nonatomic, readonly) WebHistoryItem *currentItem;
@property (nonatomic, readonly) WebHistoryItem *forwardItem;
@property (nonatomic, readonly) int forwardListCount;

+ (void)initialize;

- (void)_close;
- (void)addItem:(id)arg1;
- (id)backItem;
- (int)backListCount;
- (id)backListWithLimit:(int)arg1;
- (int)capacity;
- (bool)containsItem:(id)arg1;
- (id)currentItem;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)forwardItem;
- (int)forwardListCount;
- (id)forwardListWithLimit:(int)arg1;
- (void)goBack;
- (void)goForward;
- (void)goToItem:(id)arg1;
- (id)init;
- (id)initWithBackForwardList:(void*)arg1;
- (id)itemAtIndex:(int)arg1;
- (unsigned long long)pageCacheSize;
- (void)removeItem:(id)arg1;
- (void)setCapacity:(int)arg1;
- (void)setPageCacheSize:(unsigned long long)arg1;
- (void)setToMatchDictionaryRepresentation:(id)arg1;

@end
