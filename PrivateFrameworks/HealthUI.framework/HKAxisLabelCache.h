
@interface HKAxisLabelCache : NSObject {
    NSLock * _axisLabelCacheLock;
    <HKAxisLabelDataSource> * _axisLabelDataSource;
    NSArray * _lastRequestData;
    HKValueRange * _lastRequestRange;
    NSCache * _mainCache;
}

@property (nonatomic, readonly) NSLock *axisLabelCacheLock;
@property (nonatomic, readonly) <HKAxisLabelDataSource> *axisLabelDataSource;
@property (nonatomic, retain) NSArray *lastRequestData;
@property (nonatomic, retain) HKValueRange *lastRequestRange;
@property (nonatomic, retain) NSCache *mainCache;

- (void).cxx_destruct;
- (bool)_axisLabel:(id)arg1 insideModelRange:(id)arg2;
- (id)_axisLabelsForPage:(id)arg1 zoomScale:(double)arg2;
- (void)_handleTimeChangeNotification:(id)arg1;
- (id)allAxisLabelsForRange:(id)arg1 zoomScale:(double)arg2;
- (id)axisLabelCacheLock;
- (id)axisLabelDataSource;
- (void)dealloc;
- (id)initWithLabelDataSource:(id)arg1;
- (void)invalidateCache;
- (id)lastRequestData;
- (id)lastRequestRange;
- (id)mainCache;
- (void)setLastRequestData:(id)arg1;
- (void)setLastRequestRange:(id)arg1;
- (void)setMainCache:(id)arg1;

@end
