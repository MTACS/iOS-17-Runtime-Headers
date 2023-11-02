
@interface PACoalescingIntervalTracker : NSObject {
    NSMutableDictionary * _coalescingIntervals;
    bool  _collectAssetIdentifiers;
    unsigned long long  _injectedIdentifier;
    double  _intervalEndTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PAAccessLogger * _logger;
}

@property (nonatomic) bool collectAssetIdentifiers;
@property (nonatomic) double intervalEndTime;
@property (nonatomic, readonly) PAAccessLogger *logger;

- (void).cxx_destruct;
- (void)coalesce:(id)arg1;
- (bool)collectAssetIdentifiers;
- (void)dealloc;
- (void)expireIntervalWithMatcher:(id)arg1 state:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (double)intervalEndTime;
- (void)invalidate;
- (id)logger;
- (void)setCollectAssetIdentifiers:(bool)arg1;
- (void)setIntervalEndTime:(double)arg1;

@end
