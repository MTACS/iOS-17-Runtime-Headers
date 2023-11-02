
@interface MRScreenMirroringObserver : NSObject {
    id /* block */  _callback;
    long long  _deviceCount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic) long long deviceCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)UIControllingObserver;
+ (id)observerWithStateChangeCallback:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_contextChangeNotification:(id)arg1;
- (void)_init;
- (void)_notifyIfNeeded;
- (id /* block */)callback;
- (void)dealloc;
- (long long)deviceCount;
- (id)initWithStateChangeCallback:(id /* block */)arg1;
- (id)queue;
- (void)setDeviceCount:(long long)arg1;

@end
