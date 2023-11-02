
@interface SGRequestContext : NSObject {
    int  _backpressureHazard;
    int  _concurrencyBehavior;
    int  _extractionMode;
    SGServiceContext * _serviceContext;
}

@property (nonatomic, readonly) int backpressureHazard;
@property (nonatomic, readonly) int concurrencyBehavior;
@property (nonatomic, readonly) int extractionMode;
@property (nonatomic, readonly) NSOperationQueue *processingQueue;
@property (nonatomic, readonly) SGServiceContext *serviceContext;
@property (nonatomic, readonly) NSOperationQueue *storageQueue;

- (void).cxx_destruct;
- (int)backpressureHazard;
- (int)concurrencyBehavior;
- (int)extractionMode;
- (id)init;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3 extractionMode:(int)arg4;
- (id)processingQueue;
- (id)serviceContext;
- (id)storageQueue;

@end
