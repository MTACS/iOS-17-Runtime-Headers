
@interface SecItemRateLimit : NSObject {
    NSObject<OS_dispatch_queue> * _dataQueue;
    bool  _forceEnabled;
    double  _limitMultiplier;
    NSDate * _roBucket;
    int  _roCapacity;
    double  _roRate;
    NSDate * _rwBucket;
    int  _rwCapacity;
    double  _rwRate;
}

@property (nonatomic, readonly) double limitMultiplier;
@property (nonatomic, readonly) NSDate *roBucket;
@property (nonatomic, readonly) int roCapacity;
@property (nonatomic, readonly) double roRate;
@property (nonatomic, readonly) NSDate *rwBucket;
@property (nonatomic, readonly) int rwCapacity;
@property (nonatomic, readonly) double rwRate;

+ (id)getStaticRateLimit;
+ (id)instance;
+ (void)resetStaticRateLimit;

- (void).cxx_destruct;
- (bool)consumeTokenFromBucket:(bool)arg1;
- (void)forceEnabled:(bool)arg1;
- (id)init;
- (bool)isEnabled;
- (bool)isModifyingAPICallWithinLimits;
- (bool)isReadOnlyAPICallWithinLimits;
- (double)limitMultiplier;
- (id)roBucket;
- (int)roCapacity;
- (double)roRate;
- (id)rwBucket;
- (int)rwCapacity;
- (double)rwRate;
- (bool)shouldCountAPICalls;

@end
