
@interface KoaMapper.KMFindMySyncDevicesProvider : NSObject {
    void itemBuilder;
    void queue;
    void syncDeviceProvider;
}

- (void).cxx_destruct;
- (id)getSyncDevices:(id*)arg1;
- (id)init;

@end
