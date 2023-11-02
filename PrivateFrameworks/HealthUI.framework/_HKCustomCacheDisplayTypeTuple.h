
@interface _HKCustomCacheDisplayTypeTuple : NSObject {
    HKChartCache * _chartCache;
    HKDisplayType * _displayType;
}

@property (nonatomic, readonly) HKChartCache *chartCache;
@property (nonatomic, readonly) HKDisplayType *displayType;

- (void).cxx_destruct;
- (id)chartCache;
- (id)displayType;
- (id)initWithCustomCache:(id)arg1 displayType:(id)arg2;

@end
