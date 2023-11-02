
@interface CMBikeSensorInternal : NSObject {
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

- (void)_feedBikeSensorData:(id)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
