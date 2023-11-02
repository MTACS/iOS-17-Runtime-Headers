
@protocol GCDeviceComponent <_GCIPCObject>

@required

- (void)setDevice:(id <GCDevice>)arg1;

@optional

- (<GCDeviceComponent> *)capture;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
