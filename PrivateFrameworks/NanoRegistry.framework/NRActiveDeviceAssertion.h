
@interface NRActiveDeviceAssertion : NSObject {
    NRDevice * _device;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, retain) NRDevice *device;
@property (nonatomic, readonly) bool isActive;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)invalidate;
- (bool)isActive;

@end
