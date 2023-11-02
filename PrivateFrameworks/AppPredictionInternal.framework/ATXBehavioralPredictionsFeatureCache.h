
@interface ATXBehavioralPredictionsFeatureCache : NSObject {
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)addItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; })arg1 forBundleId:(id)arg2;
- (id)init;
- (struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; })itemForBundleId:(id)arg1;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x_3_1_1; } x3; })itemsForBundleIds:(id)arg1;

@end
