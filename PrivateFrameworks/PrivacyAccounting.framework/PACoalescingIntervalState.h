
@interface PACoalescingIntervalState : NSObject {
    unsigned long long  _absoluteStartTime;
    NSSet * _assetIdentifiers;
    unsigned long long  _continuousStartTime;
    NSObject<OS_dispatch_source> * _endTimer;
    PAAccessInterval * _interval;
    unsigned long long  _lastCoalescedTime;
    PACoalescingIntervalTracker * _tracker;
}

@property (nonatomic, readonly) NSSet *assetIdentifiers;
@property (nonatomic, readonly) double idleTime;
@property (nonatomic, readonly) PAAccessInterval *interval;
@property (nonatomic, readonly) double timestampAdjustment;

- (void).cxx_destruct;
- (id)assetIdentifiers;
- (void)dealloc;
- (id)description;
- (double)idleTime;
- (id)initWithInterval:(id)arg1 matcher:(id)arg2 tracker:(id)arg3;
- (id)interval;
- (void)invalidate;
- (double)timestampAdjustment;
- (void)touch;

@end
