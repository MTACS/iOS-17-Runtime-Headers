
@interface AFMediaRemoteDeviceInfo : NSObject {
    NSString * _groupIdentifier;
    AFInstanceContext * _instanceContext;
    NSString * _routeIdentifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)currentDevice;
+ (id)localDeviceInfo;

- (void).cxx_destruct;
- (void)_activeDeviceInfoChanged:(id)arg1;
- (void)_getMRDeviceInfoWithCompletion:(id /* block */)arg1;
- (void)_updateWithRouteIdentifier:(id)arg1 groupIdentifier:(id)arg2;
- (void)getGroupIdentifierWithCompletion:(id /* block */)arg1;
- (void)getRouteIdentifierWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;

@end
