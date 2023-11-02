
@interface HUDeviceController : NSObject <AXHARemoteUpdateProtocol> {
    NSMutableDictionary * _deviceUpdatesDescription;
    NSObject<OS_dispatch_queue> * _deviceUpdatesQueue;
    AXDispatchTimer * _sendPropertyUpdatesTimer;
    NSMutableArray * _updateDeviceBlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *deviceUpdatesDescription;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *deviceUpdatesQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXDispatchTimer *sendPropertyUpdatesTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateDeviceBlocks;

- (void).cxx_destruct;
- (void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
- (id)deviceUpdatesDescription;
- (id)deviceUpdatesQueue;
- (id)hearingAidForDeviceID:(id)arg1;
- (id)init;
- (void)registerForPropertyUpdates:(id /* block */)arg1;
- (bool)representsLocalDevices;
- (id)sendPropertyUpdatesTimer;
- (void)setDeviceUpdatesDescription:(id)arg1;
- (void)setDeviceUpdatesQueue:(id)arg1;
- (void)setSendPropertyUpdatesTimer:(id)arg1;
- (void)setUpdateDeviceBlocks:(id)arg1;
- (void)stopPropertyUpdates;
- (id)updateDeviceBlocks;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(id)arg3;

@end
