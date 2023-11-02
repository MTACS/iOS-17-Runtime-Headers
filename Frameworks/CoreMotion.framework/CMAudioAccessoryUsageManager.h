
@interface CMAudioAccessoryUsageManager : NSObject {
    long long  _authorizationStatus;
    <CMAudioAccessoryUsageDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { 
        struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { 
            struct CLConnectionClient {} *__value_; 
        } __ptr_; 
    }  _locationConnection;
}

@property (getter=isAuthorized, nonatomic, readonly) long long authorizationStatus;
@property (nonatomic) <CMAudioAccessoryUsageDelegate> *delegate;

+ (long long)isAuthorized;
+ (bool)isAvailable;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_connect;
- (void)_disconnect;
- (void)_handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (long long)isAuthorized;
- (void)requestAudioAccessoryUsageUpdatesWithHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
