
@interface CMWaterSubmersionManager : NSObject {
    <CMWaterSubmersionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    void * _locationConnection;
    NSMeasurement * _maximumDepth;
}

@property (nonatomic) <CMWaterSubmersionManagerDelegate> *delegate;
@property (nonatomic, readonly) NSMeasurement *maximumDepth;

+ (long long)authorizationStatus;
+ (bool)isAuthorizedAndEntitled;
+ (bool)waterSubmersionAvailable;

- (void).cxx_destruct;
- (void)_connect;
- (void)_disconnect;
- (void)_handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)maximumDepth;
- (void)notifySubmersionStateProcessingCompleted;
- (void)setDelegate:(id)arg1;

@end
