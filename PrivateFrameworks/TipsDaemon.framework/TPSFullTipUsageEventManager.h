
@interface TPSFullTipUsageEventManager : NSObject {
    void initialized;
    void queue;
    void tipIDToContextualInfoMap;
}

- (void).cxx_destruct;
- (id)contextualInfoForIdentifier:(id)arg1;
- (id)contextualInfoMap;
- (id)init;
- (void)removeUsageEventCache;
- (void)updateContextualInfoForIdentifiers:(id)arg1 tipsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3;

@end
