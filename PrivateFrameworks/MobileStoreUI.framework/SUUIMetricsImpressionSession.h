
@interface SUUIMetricsImpressionSession : NSObject {
    NSMutableArray * _impressionIdentifiers;
    NSMutableOrderedSet * _impressionableViewElements;
    NSMapTable * _impressionableViewElementsTimerMap;
    NSMutableString * _impressionsString;
}

@property (nonatomic, readonly, copy) NSArray *impressionIdentifiers;
@property (nonatomic, readonly, copy) NSArray *impressionableViewElements;
@property (nonatomic, readonly, copy) NSString *impressionsString;

- (void).cxx_destruct;
- (id)_allViewElementsInTimerMap;
- (void)_clearTimerForViewElement:(id)arg1;
- (id)_getTimerForViewElement:(id)arg1;
- (void)_setTimer:(id)arg1 forViewElement:(id)arg2;
- (void)addItemIdentifier:(long long)arg1;
- (void)addItemViewElement:(id)arg1;
- (void)beginActiveImpressionForViewElement:(id)arg1;
- (void)endActiveImpressionForViewElement:(id)arg1;
- (void)endAllPendingActiveImpression;
- (id)impressionIdentifiers;
- (id)impressionableViewElements;
- (id)impressionsString;
- (id)init;

@end
